// Link: https://www.hackerrank.com/challenges/cut-the-sticks/problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
* @brief This method determines the number of sticks cut in each iteration.
* @details This method determines the number of sticks cut in each iteration. 
    It then returns the number of sticks cut in each iteration.
    Function time complexity is O(n log n), where n is the size of the input array.
* @param arr The input array.
* @return The number of sticks cut in each iteration.
*/
vector<int> cutTheSticksFirstSort(vector<int> arr) {
    vector<int> result;
    sort(arr.begin(), arr.end());
    while (!arr.empty()) {
        result.push_back(arr.size());
        int min = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= min;
        }
        arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
    }

    return result;
}

/**
* @brief This method determines the number of sticks cut in each iteration.
* @details This method determines the number of sticks cut in each iteration. 
    It then returns the number of sticks cut in each iteration.
    Function time complexity is O(n^2), where n is the size of the input array.
* @param arr The input array.
* @return The number of sticks cut in each iteration.
*/
vector<int> cutTheSticks(vector<int> arr) {
    vector<int> result;
    while (arr.size() > 0) {
        result.push_back(arr.size());
        int min = *min_element(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= min;
        }
        // Remove all zeros from the array
        arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
    }

    return result;
}


int main()
{
    cout << "Solution of cutTheSticks: ";
    vector<int> result = cutTheSticks({5, 4, 4, 2, 2, 8});
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Solution of cutTheSticksFirstSort: ";
    result = cutTheSticksFirstSort({5, 4, 4, 2, 2, 8});
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}