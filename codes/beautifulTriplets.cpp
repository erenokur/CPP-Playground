// Link: https://www.hackerrank.com/challenges/beautiful-triplets/problem
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
* @brief This method finds the number of beautiful triplets in the array.
* @details This method finds the number of beautiful triplets in the array. 
    A beautiful triplet is a set of three numbers where the second number is d more than the first number, 
    and the third number is d more than the second number. 
    Function time complexity is O(n).
* @param d The difference between the numbers.
* @param arr The array of numbers.
* @return The number of beautiful triplets.
*/
int beautifulTripletsWithUnOrderedMap(int d, vector<int> arr) {
    unordered_map<int, int> numCounts;
    int count = 0;

    for (int num : arr) {
        numCounts[num]++;
    }

    for (int num : arr) {
        if (numCounts[num + d] > 0 && numCounts[num + 2 * d] > 0) {
            count++;
        }
    }

    return count;
}

/**
* @brief This method finds the number of beautiful triplets in the array.
* @details This method finds the number of beautiful triplets in the array. 
    A beautiful triplet is a set of three numbers where the second number is d more than the first number, 
    and the third number is d more than the second number. 
    Function time complexity is O(n^3).
* @param d The difference between the numbers.
* @param arr The array of numbers.
* @return The number of beautiful triplets.
*/
int beautifulTriplets(int d, vector<int> arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < arr.size(); k++) {
                    if (arr[k] - arr[j] == d) {
                        count++;
                    }
                }
            }
        }
    }

    return count;
}


int main()
{
    cout << "Solution: " << beautifulTriplets(3, {1, 2, 4, 5, 7, 8, 10}) << endl;
    return 0;
}
