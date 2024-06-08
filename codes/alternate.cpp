// Link: https://www.hackerrank.com/challenges/two-characters/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the length of the longest string that can be made up of only two alternating characters.
* @details This method finds the length of the longest string that can be made up of only two alternating characters.
*     Function time complexity is O(n^3).
* @param s The string.
* @return The length of the longest string that can be made up of only two alternating characters.
 */
int alternate(string s) {
    int result = 0;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {  
            if (s[i] != s[j]) {
                string temp = "";
                for (int k = 0; k < s.size(); k++) {
                    if (s[k] == s[i] || s[k] == s[j]) {
                        temp.push_back(s[k]);
                    }
                }
                bool isAlternate = true;
                for (int k = 0; k < temp.size() - 1; k++) {
                    if (temp[k] == temp[k + 1]) {
                        isAlternate = false;
                        break;
                    }
                }

                if (isAlternate) {
                    result = max(result, (int)temp.size());
                }
            }
        }
    }

    return result;
}


int main()
{
    cout << "Solution: " << alternate("beabeefeab") << endl;
    return 0;
}