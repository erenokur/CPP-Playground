// Link: https://www.hackerrank.com/challenges/fair-rations/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method finds the minimum number of loaves that must be distributed so that every person has even number of loaves.
* @details This method finds the minimum number of loaves that must be distributed so that every person has even number of loaves. 
    Function time complexity is O(n).
    n is the number of people.
* @param B The number of loaves each person has.
* @return The minimum number of loaves that must be distributed so that every person has even number of loaves.
*/
string fairRations(vector<int> B) {
    int count = 0;
    for (int i = 0; i < B.size() - 1; i++) {
        if (B[i] % 2 != 0) {
            B[i]++;
            B[i + 1]++;
            count += 2;
        }
    }
    if (B[B.size() - 1] % 2 != 0) {
        return "NO";
    }
    return to_string(count);
}

int main()
{
    cout << "Solution: " << fairRations({1, 2}) << endl;
    return 0;
}