// Link: https://www.hackerrank.com/challenges/separate-the-numbers/problem
#include <iostream>

using namespace std;

/*
* @brief This method finds weighted Uniform Strings.
* @details Calculate weights of uniform substrings and check if the queries are in the map.
*     Function time complexity is O(n + m).
* @param string.
* @param an array of integers.
* @return result of weighted uniform strings.
*/
void separateNumbers(string s) {
    string first = "";
    bool valid = false;
    for(int i = 1; i <= s.size() / 2; i++){
        string temp = s.substr(0, i);
        long long num = stoll(temp);
        first = temp;
        string current = temp;
        while(current.size() < s.size()){
            num++;
            current += to_string(num);
        }
        if(current == s){
            valid = true;
            break;
        }
    }
    if(valid){
        cout << "YES " << first << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main()
{
    cout << "Solution: ";
    separateNumbers("1234");
    return 0;
}