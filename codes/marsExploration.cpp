// Link: https://www.hackerrank.com/challenges/mars-exploration/problem
#include <iostream>
#include <algorithm>

using namespace std;

/*
* @brief This method counts the number of letters that are different from the original message.
* @details This method counts the number of letters that are different from the original message.
*     Function time complexity is O(n).
* @param s The message.
* @return The number of letters that are different from the original message.
*/
int marsExploration(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i += 3) {
        if (s[i] != 'S') {
            count++;
        }
        if (s[i + 1] != 'O') {
            count++;
        }
        if (s[i + 2] != 'S') {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Solution: " << marsExploration("SOSSPSSQSSOR") << endl;
    return 0;
}