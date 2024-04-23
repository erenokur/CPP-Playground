// Link: https://www.hackerrank.com/challenges/lisa-workbook/problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
* @brief This method finds the number of special problems in the workbook.
* @details This method finds the number of special problems in the workbook. 
    Function time complexity is O(n).
* @param n The number of chapters.
* @param k The number of problems per page.
* @param arr The number of problems in each chapter.
* @return The number of special problems.
*/
int workbook(int n, int k, vector<int> arr) {
    int page = 1;
    int special = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= arr[i]; j++) {
            if (j == page) {
                special++;
            }
            if (j % k == 0 || j == arr[i]) {
                page++;
            }
        }
    }
    return special;
}


int main()
{
    cout << "Solution: " << workbook(5, 3, {4, 2, 6, 1, 10}) << endl;
    return 0;
}