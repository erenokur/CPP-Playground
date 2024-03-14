// Link: https://www.hackerrank.com/challenges/strange-advertising/problem
#include <iostream>

using namespace std;

/**
* @brief This method determines the number of people who liked the advertisement.
* @details This method iterates through the number of days and calculates the number of people who liked the advertisement.
    It then returns the cumulative number of people who liked the advertisement.
    Function time complexity is O(n) where n is the number of days.
* @param n The number of days.
* @return The cumulative number of people who liked the advertisement.
*/
int viralAdvertising(int n) {
    int shared = 5;
    int liked = 0;
    int cumulative = 0;
    for (int i = 0; i < n; i++) {
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
    }
    return cumulative;
}


int main()
{
    cout << "Solution: " << viralAdvertising(3) << endl;
    return 0;
}