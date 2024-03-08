// url: https://www.hackerrank.com/challenges/electronics-shop/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method finds the maximum amount of money that can be spent on a keyboard and a USB drive.
* @details This method iterates through the keyboards and the USB drives and calculates the sum of each pair. 
    It then compares the sum with the budget and updates the maximum amount of money that can be spent. 
    It returns the maximum amount of money that can be spent.
    Where n is the size of the keyboards vector and m is the size of the drives vector.
    Function time complexity is O(n * m).
* @param keyboards The array of keyboard prices.
* @param drives The array of USB drive prices.
* @param budget The budget.
* @return The maximum amount of money that can be spent.
*/
int getMoneySpent(vector<int> keyboards, vector<int> drives, int budget) {
    int max = -1;
    for (int i = 0; i < keyboards.size(); i++) {
        for (int j = 0; j < drives.size(); j++) {
            int sum = keyboards[i] + drives[j];
            if (sum <= budget && sum > max) {
                max = sum;
            }
        }
    }
    return max;
}

int main()
{
    cout << "Solution: " << getMoneySpent({40, 50, 60}, {5, 8, 12}, 60) << endl;
    return 0;
}