// Link: https://www.hackerrank.com/challenges/extra-long-factorials/problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
* @brief This method calculates the factorial of a number.
* @details This method calculates the factorial of a number. 
    It then returns the factorial of the number.
    Function time complexity is  O(n) * O(n) = O(n^2), where n is the input to the function.
* @param n The number.
* @return The factorial of the number.
*/
vector<int> extraLongFactorials(int n) {
    vector<int> result(500, 0);
    result[0] = 1;
    int result_size = 1;
    for (int i = 2; i <= n; i++) {
        int carry = 0;
        for (int j = 0; j < result_size; j++) {
            int product = result[j] * i + carry;
            result[j] = product % 10;
            carry = product / 10;
        }
        while (carry) {
            result[result_size] = carry % 10;
            carry = carry / 10;
            result_size++;
        }
    }

    result.resize(result_size);
    reverse(result.begin(), result.begin() + result_size);

    return result;
}

int main()
{
    cout << "Solution: ";
    vector<int> result = extraLongFactorials(45);
    for (int i : result) {
        cout << i;
    }
    cout << endl;

    return 0;
}