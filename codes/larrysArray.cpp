// Link: https://www.hackerrank.com/challenges/larrys-array/problem
#include <iostream>
#include <vector>

using namespace std;

/*
* @brief This method finds whether the array can be sorted using the given operation.
* @details This method finds whether the array can be sorted using the given operation.
*     Function time complexity is O(n^2).
* @param A The array.
* @return "YES" if the array can be sorted using the given operation, otherwise "NO".
*/
string larrysArray(vector<int> A) {
    int n = A.size();
    int inv = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            inv += A[i] > A[j];
        }
    }
    return inv % 2 == 0 ? "YES" : "NO";
}

int main()
{
    cout << "Solution: " << larrysArray({3, 1, 2}) << endl;
    return 0;
}