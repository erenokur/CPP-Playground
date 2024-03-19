// Link: https://www.hackerrank.com/challenges/find-digits/problem
#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

/**
* @brief This method finds the number of digits of n that are divisors of n.
* @details This method finds the number of digits of n that are divisors of n. 
    It then returns the number of digits of n that are divisors of n.
    Function time complexity is O(d) where d is the number of digits in the number n.
* @param n The number.
* @return The number of digits of n that are divisors of n.
*/
int findDigits(int n) {
    int count = 0;
    int num = n;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && n % digit == 0) {
            count++;
        }
        num /= 10;
    }

    return count;
}

/**
* @brief This method finds the number of digits of n that are divisors of n.
* @details This method finds the number of digits of n that are divisors of n. 
    It then returns the number of digits of n that are divisors of n.
    Function time complexity is O(d) where d is the number of digits in the number n.
* @param n The number.
* @return The number of digits of n that are divisors of n.
*/
int findDigitsFaster(int n) {
    int count = 0;
    for (char c : std::to_string(n)) {
        int digit = c - '0';
        if (digit != 0 && n % digit == 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    int num = 111111112;

    auto start = std::chrono::high_resolution_clock::now();
    cout << "Solution: " << findDigits(num) << endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    cout << "Time taken by findDigits: " << diff.count() << " s\n";

    start = std::chrono::high_resolution_clock::now();
    cout << "Solution: " << findDigitsFaster(num) << endl;
    end = std::chrono::high_resolution_clock::now();
    diff = end - start;
    cout << "Time taken by findDigitsFaster: " << diff.count() << " s\n";

    /*
    Solution: 9
    Time taken by findDigits: 0.0200027 s
    Solution: 9
    Time taken by findDigitsFaster: 0.0009992 s
    */
    return 0;
}