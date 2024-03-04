// url: https://www.hackerrank.com/challenges/migratory-birds/problem

#include <iostream>
#include <vector>
#include <map>

using namespace std;

/** 
* @brief This method finds the most common bird type with respect to is priority in the given array.
* @details This method uses a map to store the occurrences of each bird type. 
    It iterates through the array and updates the occurrences of each bird type. 
    It also keeps track of the most common bird type and its occurrences. 
    If a bird type has the same occurrences as the most common bird type, 
    it updates the most common bird type to the one with the smallest number.
    Function time complexity is O(n).
* @param arr The array of bird types.
* @return The most common bird type.
*/
int migratoryBirds(std::vector<int> arr)
{
    std::map<int, int> occurrences;
    int maxOccurrence = 0;
    int minKey = 0;

    for (int num : arr) {
        occurrences[num]++;
        if (occurrences[num] > maxOccurrence) {
            maxOccurrence = occurrences[num];
            minKey = num;
        } else if (occurrences[num] == maxOccurrence && num < minKey) {
            minKey = num;
        }
    }

    return minKey;
}

/** 
* @brief Step by step method finds the most common bird type with respect to is priority in the given array. (less efficient)
* @details This method uses a map to store the occurrences of each bird type. 
    It iterates through the array and updates the occurrences of each bird type. 
    It also keeps track of the most common bird type and its occurrences. 
    If a bird type has the same occurrences as the most common bird type, 
    it updates the most common bird type to the one with the smallest number.
    Function time complexity is O(n) + O(n) + O(n) + O(n) = O(4n) = O(n).
* @param arr The array of bird types.
* @return The most common bird type.
*/
int migratoryBirdsStepByStep(vector<int> arr)
{
    std::map<int, int> occurrences;
    
    // Count occurrences of each number.
    for (int num : arr) {
        occurrences[num]++;
    }
    
    // Find max value.
    int maxOccurrenceValue = 0;
    for (const auto& pair : occurrences) {
        maxOccurrenceValue = std::max(maxOccurrenceValue, pair.second);
    }
    
    // Find keys with max value.
    std::vector<int> maxKeys;
    for (const auto& pair : occurrences) {
        if (pair.second == maxOccurrenceValue) {
            maxKeys.push_back(pair.first);
        }
    }
    
    // Choose key with min value among max keys.
    int minKey = maxKeys[0];
    int minValue = occurrences[minKey];
    for (int key : maxKeys) {
        if (occurrences[key] < minValue) {
            minKey = key;
            minValue = occurrences[key];
        }
    }
    
    return minKey;
}

int main()
{
    vector<int> arr = {1, 4, 4, 4, 5 ,3 , 3 ,3};
    cout << "Solution: " << migratoryBirds(arr) << endl;
    cout << "Step by step: " << migratoryBirdsStepByStep(arr) << endl;
    return 0;
}