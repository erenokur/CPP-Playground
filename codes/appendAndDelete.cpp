#include <iostream>

using namespace std;

/**
* @brief This method determines if the string s can be converted to string t in k operations.
* @details This method determines if the string s can be converted to string t in k operations. 
    It then returns "Yes" if it can be converted, otherwise "No".
    Function time complexity is O(n), where n is the length of the string s.
* @param s The string s.
* @param t The string t.
* @param k The number of operations.
* @return "Yes" if the string s can be converted to string t in k operations, otherwise "No".
*/
string appendAndDelete(string s, string t, int k) {
    int i = 0;
    while (i < s.size() && i < t.size() && s[i] == t[i]) {
        i++;
    }
    int minOperations = s.size() - i + t.size() - i;
    if (k >= s.size() + t.size() || (k >= minOperations && (k - minOperations) % 2 == 0)) {
        return "Yes";
    } else {
        return "No";
    }
}

int main()
{
    cout << "Solution: " << appendAndDelete("ashley","ash", 2) << endl;
    return 0;
}