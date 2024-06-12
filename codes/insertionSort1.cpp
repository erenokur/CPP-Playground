// Link: https://www.hackerrank.com/challenges/insertionsort1/problem
#include <iostream>
#include <vector>

using namespace std;

/*
* @brief This method sorts the array using insertion sort.
* @details This method sorts the array using insertion sort.
*     Function time complexity is O(n^2).
* @param n The number of elements in the array.
* @param arr The array.
* @return The sorted array.
*/
vector<int> insertionSort1(int n, vector<int> arr) {
    int value = arr[n - 1];
    int i = n - 2;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
        i--;
    }
    arr[i + 1] = value;
    return arr;
}

int main()
{
    cout << "Solution: ";
    vector<int> result = insertionSort1(5, {2, 4, 6, 8, 3});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}