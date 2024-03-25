// Link: https://www.hackerrank.com/challenges/non-divisible-subset/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method determines the size of the largest subset of s where the sum of any 2 numbers in the subset is not evenly divisible by k.
* @details This method determines the size of the largest subset of s where the sum of any 2 numbers in the subset is not evenly divisible by k. 
    It then returns the size of the largest subset.
    Function time complexity is O(n), where n is the size of the input array.
* @param k The divisor.
* @param s The input array.
* @return The size of the largest subset.
*/
int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> remainders(k, 0);
    for (int i = 0; i < s.size(); i++) {
        remainders[s[i] % k]++;
    }

    int count = min(remainders[0], 1);
    for (int i = 1; i <= k / 2; i++) {
        if (i != k - i) {
            count += max(remainders[i], remainders[k - i]);
        } else {
            count++;
        }
    }

    return count;
}

int main()
{
    cout << "Solution: " << nonDivisibleSubset(3, {1, 7, 2, 4}) << endl;
    return 0;
}