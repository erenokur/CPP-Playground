// Link: https://www.hackerrank.com/challenges/repeated-string/problem
#include <iostream>

using namespace std;

/**
* @brief This method determines the number of 'a's in the first n characters of an infinite string.
* @details This method determines the number of 'a's in the first n characters of an infinite string. 
    It then returns the number of 'a's.
    Function time complexity is O(n), where n is the size of the input string.
* @param s The input string.
* @param n The number of characters to consider.
* @return The number of 'a's.
*/
long repeatedString(string s, long n) {
    long count = 0;
    long partialCount = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            count++;
            if (i < n % s.size()) {
                partialCount++;
            }
        }
    }

    long result = (n / s.size()) * count + partialCount;
    return result;
}

int main()
{
    cout << "Solution: " << repeatedString("aba", 10) << endl;
    return 0;
}