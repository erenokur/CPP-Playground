// Link: https://www.hackerrank.com/challenges/camelcase/problem
#include <iostream>

using namespace std;

/*
* @brief This method finds the number of words in a camel case string.
* @details This method finds the number of words in a camel case string.
*     A is char 65 (0x41) and Z is char 90 (0x5a) between these two values are capital letters.
*     Function time complexity is O(n).
* @param s The string.
* @return The number of words in a camel case string.
*/
int camelcase(string s) {
    int count = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Solution: " << camelcase("saveChangesInTheEditor") << endl;
    return 0;
}