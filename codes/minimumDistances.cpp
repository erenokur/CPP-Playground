// Link: https://www.hackerrank.com/challenges/minimum-distances/problem
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/**
* @brief This method finds the minimum distance between two equal elements in the array.
* @details This method finds the minimum distance between two equal elements in the array. 
    Function time complexity is O(n^2).
* @param a The array of numbers.
* @return The minimum distance between two equal elements.
*/
int minimumDistances(vector<int> a) {
    int minDistance = -1;
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == a[j]) {
                int distance = j - i;
                if (minDistance == -1 || distance < minDistance) {
                    minDistance = distance;
                }
            }
        }
    }
    return minDistance;
}

/**
* @brief This method finds the minimum distance between two equal elements in the array.
* @details This method finds the minimum distance between two equal elements in the array. 
    Function time complexity is O(n).
* @param a The array of numbers.
* @return The minimum distance between two equal elements.
*/
int minimumDistancesWithMapping(vector<int> a) {
    unordered_map<int, int> lastIndex;
    int minDistance = -1;

    for (int i = 0; i < a.size(); i++) {
        if (lastIndex.count(a[i])) {
            int distance = i - lastIndex[a[i]];
            if (minDistance == -1 || distance < minDistance) {
                minDistance = distance;
            }
        }
        lastIndex[a[i]] = i;
    }

    return minDistance;
}


int main()
{
    cout << "Solution: " << minimumDistances({7, 1, 3, 4, 1, 7}) << endl;
    return 0;
}