// Link: https://www.hackerrank.com/challenges/caesar-cipher-1/problem
#include <iostream>
#include <algorithm>

using namespace std;

/*
* @brief This method encrypts the string using Caesar cipher.
* @details This method encrypts the string using Caesar cipher.
*     Function time complexity is O(n).
* @param s The string to encrypt.
* @param k The number of letters to rotate.
* @return The encrypted string.
*/
string caesarCipher(string s, int k) {
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (isupper(s[i])) {
                s[i] = (s[i] - 'A' + k) % 26 + 'A';
            } else {
                s[i] = (s[i] - 'a' + k) % 26 + 'a';
            }
        }
    }
    return s;
}

int main()
{
    cout << "Solution: " << caesarCipher("middle-Outz", 2) << endl;
    return 0;
}