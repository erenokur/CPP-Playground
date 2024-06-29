// Link: https://www.hackerrank.com/challenges/pangrams/problem
#include <iostream>

using namespace std;

/*
* @brief This method checks if the string is a pangram.
* @details This method checks if the string is a pangram.
*     Function time complexity is O(n).
* @param s The string.
* @return "pangram" if the string is a pangram, otherwise "not pangram".
*/
string pangrams(string s) {
    int letters[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            letters[tolower(s[i]) - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (letters[i] == 0) {
            return "not pangram";
        }
    }
    return "pangram";
}

int main()
{
    cout << "Solution: " << pangrams("We promptly judged antique ivory buckles for the next prize") << endl;
    return 0;
}