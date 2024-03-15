// Link: https://www.hackerrank.com/challenges/save-the-prisoner/problem
#include <iostream>

using namespace std;

/**
* @brief This method determines the chair number to which the last piece of candy is given.
* @details This method calculates the chair number to which the last piece of candy is given.
    It then returns the chair number.
    Function time complexity is O(1).
* @param prisonerNumber The number of prisoners.
* @param candyNumber The number of candies.
* @param startingChair The chair number to start from.
* @return The chair number to which the last piece of candy is given.
*/
int saveThePrisoner(int prisonerNumber, int candyNumber, int startingChair) {
    return (startingChair + candyNumber - 2) % prisonerNumber + 1;
}

int main()
{
    cout << "Solution: " << saveThePrisoner(7, 19, 2) << endl;
    return 0;
}