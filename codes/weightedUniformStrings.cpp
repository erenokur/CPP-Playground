// link: https://www.hackerrank.com/challenges/weighted-uniform-string/problem
#include <iostream>
#include <vector>
#include <map>

using namespace std;

/*
* @brief This method finds weighted Uniform Strings.
* @details Calculate weights of uniform substrings and check if the queries are in the map.
*     Function time complexity is O(n + m).
* @param string.
* @param an array of integers.
* @return result of weighted uniform strings.
*/
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    map<int, int> mp;
    int lst = 0;
    for(int i = 0; i < s.size(); i++){
        if(i != 0 && s[i] == s[i-1]){
            lst += s[i] - 'a' + 1;
            mp[lst] = 1;
        }
        else{
            lst = s[i] - 'a' + 1;
            mp[lst] = 1;
        }
    }
    vector<string> result;
    for(int i = 0; i < queries.size(); i++){
        if(mp[queries[i]]) result.push_back("Yes");
        else result.push_back("No");
    }
    return result;
}

int main()
{
    cout << "Solution: ";
    vector<string> result =    weightedUniformStrings("abcc", {1, 3, 12, 5, 9, 10});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}