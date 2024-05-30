// Link: https://www.hackerrank.com/challenges/3d-surface-area/problem
#include <iostream>
#include <vector>

using namespace std;


/**
* @brief This method finds the surface area of the 3D figure.
* @details This method calculates the surface area of the 3D figure by adding the area of the top and bottom faces, 
    and the area of the sides. The area of the sides is calculated by adding the difference between the heights of adjacent cells.
    Function time complexity is O(n*m).
* @param A The 2D vector representing the 3D figure.
* @return The surface area of the 3D figure.
 */
int surfaceArea(vector<vector<int>> A) {
    int n = A.size();
    int m = A[0].size();
    int area = 2 * n * m;
    for (int i = 0; i < n; i++) {
        area += A[i][0];
        area += A[i][m - 1];
        for (int j = 1; j < m; j++) {
            area += abs(A[i][j] - A[i][j - 1]);
        }
    }
    for (int j = 0; j < m; j++) {
        area += A[0][j];
        area += A[n - 1][j];
        for (int i = 1; i < n; i++) {
            area += abs(A[i][j] - A[i - 1][j]);
        }
    }
    return area;
}


int main()
{
    cout << "Solution: " << surfaceArea({{1,3,4},{2,2,3},{1,2,4}}) << endl;
    return 0;
}