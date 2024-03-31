// Link: https://www.hackerrank.com/challenges/bigger-is-greater/problem
#include <iostream>
#include <algorithm>

using namespace std;

/**
* @brief This method determines the next lexicographically greater string.
* @details This method determines the next lexicographically greater string. 
    It then returns the next lexicographically greater string.
    Function time complexity is O(n), where n is the size of the input string.
* @param w The input string.
* @return The next lexicographically greater string.
*/
string biggerIsGreater(string w) {
    int i = w.size() - 1;
    while (i > 0 && w[i - 1] >= w[i]) {
        i--;
    }
    if (i <= 0) {
        return "no answer";
    }

    int j = w.size() - 1;
    while (w[j] <= w[i - 1]) {
        j--;
    }

    std::swap(w[i - 1], w[j]);

    std::reverse(w.begin() + i, w.end());

    return w;
}

int main()
{
    cout << "Solution: " << biggerIsGreater("ab") << endl;
    return 0;
}