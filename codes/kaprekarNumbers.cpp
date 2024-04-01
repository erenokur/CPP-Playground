// Link: https://www.hackerrank.com/challenges/kaprekar-numbers/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the Kaprekar numbers in the given range.
* @details This method finds the Kaprekar numbers in the given range. 
    It then prints the Kaprekar numbers or "INVALID RANGE" if no Kaprekar numbers are found.
    Function time complexity is O(n), where n is the difference between p and q.
* @param p The starting number.
* @param q The ending number.
*/
void kaprekarNumbers(int p, int q) {
    bool found = false;
    for (int i = p; i <= q; i++) {
        long long square = (long long)i * i;
        string s = to_string(square);
        int d = to_string(i).length();
        int r = s.length() - d;
        int left = 0;
        int right = 0;
        if (r > 0) {
            left = stoi(s.substr(0, r));
        }
        right = stoi(s.substr(r));
        if (left + right == i) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "INVALID RANGE";
    }
    cout << endl;
}

int main()
{
    cout << "Solution: " << kaprekarNumbers(5, 1) << endl;
    return 0;
}