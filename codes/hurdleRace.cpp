// url: https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method determines the number of potions Dan must drink to be able to jump all the hurdles.
* @details This method iterates through the list of hurdles and finds the maximum height of the hurdles. 
    It then compares the maximum height of the hurdles with the maximum height Dan can jump. 
    If the maximum height of the hurdles is greater than the maximum height Dan can jump, 
    the method returns the difference between the maximum height of the hurdles and the maximum height Dan can jump. 
    Otherwise, it returns 0.
    Function time complexity is O(n).
* @param k The maximum height Dan can jump.
* @param height The list of hurdles.
* @return The number of potions Dan must drink to be able to jump all the hurdles.
*/
int hurdleRace(int k, vector<int> height) {
    int max = 0;
    for (int h : height) {
        if (h > max) {
            max = h;
        }
    }
    return max > k ? max - k : 0;
}

int main()
{
    cout << "Solution: " << hurdleRace(9, {10, 20, 20, 10, 10, 30, 50, 10, 20}) << endl;
    return 0;
}