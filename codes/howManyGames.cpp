// Link: https://www.hackerrank.com/challenges/halloween-sale/problem
#include <iostream>

using namespace std;

/**
* @brief This method calculates the number of games you can buy with the given amount of money.
* @details This method calculates the number of games you can buy with the given amount of money. 
    Function time complexity is O(n).
* @param p The initial price of the game.
* @param d The discount on the game.
* @param m The minimum price of the game.
* @param s The amount of money you have.
* @return The number of games you can buy.
*/
int howManyGames(int p, int d, int m, int s) {
    int games = 0;
    while (s >= p) {
        s -= p;
        p = max(p - d, m);
        games++;
    }
    return games;
}

int main()
{
    cout << "Solution: " << howManyGames(20, 3, 6, 80) << endl;
    return 0;
}