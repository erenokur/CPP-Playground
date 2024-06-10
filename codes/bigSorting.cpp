// Link: https://www.hackerrank.com/challenges/big-sorting/problem
#include <iostream>
#include <vector>

using namespace std;

/*
* @brief This method sorts the given array of strings.
* @details This method sorts the given array of strings.
*     If the strings have the same length, they are sorted lexicographically.
*     Otherwise, they are sorted by length.
*     Function time complexity is O(n log n).
* @param unsorted The array of strings.
* @return The sorted array of strings.
*/
vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(), unsorted.end(), [](const string& a, const string& b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });
    return unsorted;
}

int main()
{
cout << "Solution: ";
    vector<string> result = bigSorting({"31415926535897932384626433832795", "1", "3", "10", "3", "5"});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}