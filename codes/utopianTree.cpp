// url: https://www.hackerrank.com/challenges/utopian-tree/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the height of the utopian tree after n growth cycles.
* @details This method calculates the height of the utopian tree after n growth cycles. 
    It uses a for loop to iterate through the growth cycles and updates the height accordingly. 
    Function time complexity is O(n).
* @param n The number of growth cycles.
* @return The height of the utopian tree after n growth cycles.
*/
int utopianTree(int n) {
    int height = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            height++;
        } else {
            height *= 2;
        }
    }
    return height;
}

int main()
{
    cout << "Solution: " << utopianTree(6) << endl;
    return 0;
}