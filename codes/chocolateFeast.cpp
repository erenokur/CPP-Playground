// Link: https://www.hackerrank.com/challenges/chocolate-feast/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the number of chocolates that can be eaten.
* @details This method finds the number of chocolates that can be eaten. 
    A chocolate costs c dollars. For every m wrappers, you can get a free chocolate. 
    Function time complexity is O(n).
* @param n The amount of money.
* @param c The cost of a chocolate.
* @param m The number of wrappers needed to get a free chocolate.
* @return The number of chocolates that can be eaten.
*/
int chocolateFeast(int n, int c, int m) {
    int chocolates = n / c;
    int wrappers = chocolates;

    while (wrappers >= m) {
        int newChocolates = wrappers / m;
        chocolates += newChocolates;
        wrappers = newChocolates + wrappers % m;
    }

    return chocolates;
}


int main()
{
    cout << "Solution: " << chocolateFeast(15, 3, 2) << endl;
    return 0;
}