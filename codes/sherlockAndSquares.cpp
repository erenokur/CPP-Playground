// Link: https://www.hackerrank.com/challenges/sherlock-and-squares/problem
#include <iostream>
#include <cmath>
#include <chrono>
#include <iomanip>

using namespace std;

/**
* @brief This method determines the number of square integers between two numbers a and b.
* @details This method determines the number of square integers between two numbers a and b.
    Function time complexity is O(1).
* @param a The lower bound.
* @param b The upper bound.
* @return The number of square integers between a and b.
*/
int sherlockAndSquares(int a, int b) {
    int sqrtA = ceil(sqrt(a));
    int sqrtB = floor(sqrt(b));
    return (sqrtB - sqrtA + 1);
}

/**
* @brief This method determines the number of square integers between two numbers a and b.
* @details This method determines the number of square integers between two numbers a and b.
    Function time complexity is O(sqrt(b)), where b is the number of square integers between a and b.
* @param a The lower bound.
* @param b The upper bound.
* @return The number of square integers between a and b.
*/
int sherlockAndSquaresLessEfficient(int a, int b) {
    int count = 0;
    for (int i = 1; i * i <= b; i++) {
        if (i * i >= a) {
            count++;
        }
    }

    return count;
}

int main()
{
    int runs = 100000;
    double total_time = 0;

    for (int i = 0; i < runs; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        sherlockAndSquaresLessEfficient(24, 549);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end - start;
        total_time += diff.count();
    }
    cout << "Average time taken by sherlockAndSquaresLessEfficient: " 
         << std::fixed << std::setprecision(9) << total_time / runs << " s\n";

    total_time = 0;
    for (int i = 0; i < runs; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        sherlockAndSquares(24, 549);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end - start;
        total_time += diff.count();
    }
    cout << "Average time taken by sherlockAndSquares: " 
         << std::fixed << std::setprecision(9) << total_time / runs << " s\n";

    /*
    Average time taken by sherlockAndSquaresLessEfficient: 0.000000060 s
    Average time taken by sherlockAndSquares: 0.000000040 s
    */
    return 0;
}