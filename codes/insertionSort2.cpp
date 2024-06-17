// Link: https://www.hackerrank.com/challenges/insertionsort2/problem
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
void insertionSort2(int n, vector<int> arr) {
    for (int i = 1; i < n; i++) {
        int value = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > value) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Solution: ";
    vector<int> result = insertionSort2(7, {3, 4, 7, 5, 6, 2, 1});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}