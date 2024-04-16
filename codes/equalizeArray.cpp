// Link: https://www.hackerrank.com/challenges/equality-in-a-array/problem
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
* @brief This method finds the minimum number of elements to delete to make all elements equal.
* @details This method finds the minimum number of elements to delete to make all elements equal. 
    Function time complexity is O(n).
* @param arr The array.
* @return The minimum number of elements to delete to make all elements equal.
*/
int equalizeArrayUnorderedMap(vector<int> arr) {
    unordered_map<int, int> numCounts;
    int maxCount = 0;

    for (int num : arr) {
        numCounts[num]++;
        maxCount = max(maxCount, numCounts[num]);
    }

    return arr.size() - maxCount;
}

/**
* @brief This method finds the minimum number of elements to delete to make all elements equal.
* @details This method finds the minimum number of elements to delete to make all elements equal. 
    Function time complexity is O(n^2).
* @param arr The array.
* @return The minimum number of elements to delete to make all elements equal.
*/
int equalizeArray(vector<int> arr) {
    int max = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
        }
    }
    return arr.size() - max;
}

int main()
{
    cout << "Solution: " << equalizeArray({3, 3, 2, 1, 3}) << endl;
    return 0;
}