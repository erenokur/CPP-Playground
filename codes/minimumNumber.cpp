// Link: https://www.hackerrank.com/challenges/strong-password/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the minimum number of characters to add to make the password strong.
* @details This method finds the minimum number of characters to add to make the password strong.
*     A is char 65 (0x41) and Z is char 90 (0x5a) between these two values are capital letters.
*     a is char 97 (0x61) and z is char 122 (0x7a) between these two values are small letters.
*     0 is char 48 (0x30) and 9 is char 57 (0x39) between these two values are digits.
*     any other character is a special character.
*     Password length at least 6.
*     Function time complexity is O(n).
* @param n The number of characters in the password.
 */
int minimumNumber(int n, string password) {
    int count = 0;
    bool hasDigit = false;
    bool hasLower = false;
    bool hasUpper = false;
    bool hasSpecial = false;
    for (int i = 0; i < password.size(); i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = true;
        } else if (password[i] >= 'a' && password[i] <= 'z') {
            hasLower = true;
        } else if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = true;
        } else {
            hasSpecial = true;
        }
    }
    if (!hasDigit) {
        count++;
    }
    if (!hasLower) {
        count++;
    }
    if (!hasUpper) {
        count++;
    }
    if (!hasSpecial) {
        count++;
    }
    if (n + count < 6) {
        count += 6 - (n + count);
    }
    return count;
}


int main()
{
    cout << "Solution: " << minimumNumber(3, "Ab1") << endl;
    return 0;
}