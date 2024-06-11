// Link: https://www.hackerrank.com/challenges/tutorial-intro/problem
#include <iostream>
#include <vector>

using namespace std;

/*
* @brief This method finds the index of the given value in the array.
* @details This method finds the index of the given value in the array.
*     Function time complexity is O(log n).
* @param V The value to find.
* @param arr The array.
* @return The index of the given value in the array.
*/
int introTutorial(int V, vector<int> arr) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == V) {
            return mid;
        } else if (arr[mid] < V) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    cout << "Solution: " << introTutorial(4, {1, 4, 5, 7, 9, 12}) << endl;
    return 0;
}