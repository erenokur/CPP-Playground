// Link: https://www.hackerrank.com/challenges/happy-ladybugs/problem
#include <iostream>

using namespace std;

/*
* @brief This method determines if the ladybugs can be happy.
* @details This method determines if the ladybugs can be happy. 
    Function time complexity is O(n).
* @param b The string of ladybugs.
* @return "YES" if the ladybugs can be happy, "NO" otherwise.
*/
string happyLadybugs(string b) {
    int n = b.size();
    int count[26] = {0};
    int space = 0;
    bool happy = true;
    for (int i = 0; i < n; i++) {
        if (b[i] == '_') {
            space++;
        } else {
            count[b[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] == 1) {
            happy = false;
            break;
        }
    }
    if (space == 0) {
        for (int i = 1; i < n - 1; i++) {
            if (b[i] != b[i - 1] && b[i] != b[i + 1]) {
                happy = false;
                break;
            }
        }
        if (n > 1 && b[0] != b[1]) {
            happy = false;
        }
        if (n > 1 && b[n - 1] != b[n - 2]) {
            happy = false;
        }
    }
    return happy ? "YES" : "NO";
}

int main()
{
    cout << "Solution: " << happyLadybugs("AABBC") << endl;
    return 0;
}