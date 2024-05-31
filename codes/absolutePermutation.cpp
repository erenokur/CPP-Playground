// Link: https://www.hackerrank.com/challenges/absolute-permutation/problem
#include <iostream>
#include <vector>

using namespace std;


/*
* @brief This method finds the absolute permutation of the given number.
* @details This method calculates the absolute permutation of the given number by adding or subtracting k from each number.
*     If k is 0, the permutation is the same as the original number. If n is divisible by 2*k, the permutation is possible.
*     Function time complexity is O(n).
*/
vector<int> absolutePermutation(int n, int k) {
    vector<int> result;
    if (k == 0) {
        for (int i = 1; i <= n; i++) {
            result.push_back(i);
        }
    } else if (n % (2 * k) == 0) {
        int twoK = 2 * k;
        for (int i = 0; i < n / twoK; i++) {
            int start = i * twoK + 1;
            int end = (i + 1) * twoK;
            int mid = (end + start) / 2 + 1;
            if (mid <= end) {
                for (int j = mid; j <= end; j++) {
                    result.push_back(j);
                }
            }
            for (int j = start; j < mid; j++) {
                result.push_back(j);
            }
        }
    } else {
        result.push_back(-1);
    }
    return result;
}


int main()
{
cout << "Solution: ";
    vector<int> result = absolutePermutation(3, 0);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}