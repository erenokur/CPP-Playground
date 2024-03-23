// Link: https://www.hackerrank.com/challenges/library-fine/problem
#include <iostream>

using namespace std;

/**
* @brief This method determines the fine to be paid for a book returned to the library.
* @details This method determines the fine to be paid for a book returned to the library. 
    It then returns the fine to be paid.
    Function time complexity is O(1).
* @param d1 The day the book was returned.
* @param m1 The month the book was returned.
* @param y1 The year the book was returned.
* @param d2 The day the book was due.
* @param m2 The month the book was due.
* @param y2 The year the book was due.
* @return The fine to be paid.
*/
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 > y2) {
        return 10000;
    } else if (y1 == y2 && m1 > m2) {
        return 500 * (m1 - m2);
    } else if (y1 == y2 && m1 == m2 && d1 > d2) {
        return 15 * (d1 - d2);
    } 

    return 0;
}

int main()
{
    cout << "Solution: " << libraryFine(9, 6, 2015, 6, 6, 2015) << endl;
    return 0;
}