// Link: https://www.hackerrank.com/challenges/taum-and-bday/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the minimum cost to purchase b black gifts and w white gifts.
* @details This method finds the minimum cost to purchase b black gifts and w white gifts. 
    It then finds the minimum cost to purchase b black gifts and w white gifts with the constraint that the cost of converting a black gift to a white gift or a white gift to a black gift is z.
    Function time complexity is O(1).
* @param b The number of black gifts.
* @param w The number of white gifts.
* @param bc The cost of a black gift.
* @param wc The cost of a white gift.
* @param z The cost of converting a black gift to a white gift or a white gift to a black gift.
* @return The minimum cost to purchase b black gifts and w white gifts.
*/
long taumBday(int b, int w, int bc, int wc, int z) {
    long cost = 0;
    if (bc > wc + z) {
        cost = (long)w * wc + (long)b * (wc + z);
    } else if (wc > bc + z) {
        cost = (long)b * bc + (long)w * (bc + z);
    } else {
        cost = (long)b * bc + (long)w * wc;
    }
    
    return cost;
}


int main()
{
    cout << "Solution: " << taumBday(3, 5, 3, 4, 1) << endl;
    return 0;
}