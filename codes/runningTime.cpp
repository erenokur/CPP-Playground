#include <iostream>
#include <vector>

using namespace std;


/**
* @brief This method finds the number of shifts required to sort the array.
* @details This method calculates the number of shifts required to sort the array using insertion sort.
*     Function time complexity is O(n^2).
* @param arr The array to be sorted.
* @return The number of shifts required to sort the array.
 */
int runningTime(vector<int> arr) {
    int n = arr.size();
    int shifts = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            shifts++;
        }
        arr[j + 1] = key;
    }
    return shifts;
}


int main()
{
    cout << "Solution: " << runningTime({2, 1, 3, 1, 2}) << endl;
    return 0;
}