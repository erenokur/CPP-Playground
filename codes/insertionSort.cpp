// Link: https://www.hackerrank.com/challenges/correctness-invariant/problem
#include <iostream>
#include <algorithm>

using namespace std;

/*
* @brief This method sorts the array using insertion sort.
* @details This method sorts the array using insertion sort.
*     Function time complexity is O(n^2).
* @param N The number of elements in the array.
* @param arr The array.
* @return The sorted array.
*/
void insertionSort(int N, int arr[]) {
    for (int i = 0; i < N - 1; ++i) {
        // Last i elements are already sorted
        for (int j = 0; j < N - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    cout << "Solution: ";
    int arr[] = {7, 4, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arrCheck[n];
    copy(arr, arr + n, arrCheck);

    insertionSort(n, arr);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // check if sort working correctly
    sort(arrCheck, arrCheck + n);

    for (int i = 0; i < n; i++) {
        if (arr[i] != arrCheck[i]) {
            cout << " - Wrong answer";
            return 0;
        }
    }
    cout << " - Correct answer";
    return 0;
}