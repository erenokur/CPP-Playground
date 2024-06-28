// Link: https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
#include <iostream>

using namespace std;

/*
* @brief This method checks if the string contains the word "hackerrank".
* @details This method checks if the string contains the word "hackerrank".
*     Function time complexity is O(n).
* @param s The string.
* @return "YES" if the string contains the word "hackerrank", otherwise "NO".
*/
string hackerrankInString(string s) {
    string hackerrank = "hackerrank";
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == hackerrank[j]) {
            j++;
        }
    }
    return j == hackerrank.size() ? "YES" : "NO";
}

int main()
{
    cout << "Solution: " << hackerrankInString("hereiamstackerrank") << endl;
    return 0;
}