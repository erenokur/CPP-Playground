// url: https://www.hackerrank.com/challenges/drawing-book/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the minimum number of pages that must be turned in order to get to a specific page.
* @details This method calculates the minimum number of pages that must be turned in order to get to a specific page. 
    It uses the formula min(p / 2, n / 2 - p / 2) to calculate the minimum number of pages that must be turned.
    Function time complexity is O(1).
* @param n The number of pages in the book.
* @param p The page number to turn to.
* @return The minimum number of pages that must be turned.
*/
int drawingBook(int n, int p) {
    return std::min(p / 2, n / 2 - p / 2);
}

int main()
{
    cout << "Solution: " << drawingBook(6, 2) << endl;
    return 0;
}