// Link: https://www.hackerrank.com/challenges/funny-string/problem
#include <iostream>
#include <algorithm>

using namespace std;

/*
* @brief This method finds Funny Strings.
* @details Check if the string characters ASCI values absolute differences of the adjacent elements for both strings same so string is funny or not.
*     Function time complexity is O(n).
* @param string.
* @return result of funny strings.
*/
string funnyString(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    for(int i = 1; i < s.size(); i++){
        if(abs(s[i] - s[i - 1]) != abs(r[i] - r[i - 1])){
            return "Not Funny";
        }
    }
    return "Funny";
}


int main()
{
    cout << "Solution: ";
    cout << funnyString("acxz") << endl;
    return 0;
}