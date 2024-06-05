// Link: https://www.hackerrank.com/challenges/reduced-string/problem
#include <iostream>

using namespace std;

/*
* @brief This method finds the super reduced string.
* @details This method finds the super reduced string by removing adjacent characters that are the same.
*     Function time complexity is O(n).
* @param s The string.
* @return The super reduced string.
*/
string superReducedString(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (result.size() > 0 && result.back() == s[i]) {
            result.pop_back();
        } else {
            result.push_back(s[i]);
        }
    }
    return result.size() > 0 ? result : "Empty String";
}


int main()
{
    cout << "Solution: " << superReducedString("aaabccddd") << endl;
    return 0;
}