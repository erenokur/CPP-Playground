// url: https://www.hackerrank.com/challenges/bon-appetit/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method finds the amount of money should be refunded.
* @details This method calculates the expected share of the bill for each person. 
    It then compares the expected share with the amount of money that paid. 
    If the expected share is equal to the amount of money that should be paid, 
    it returns 0. Otherwise, it returns the amount of the refund money.
    Function time complexity is O(n).
* @param bill The array of the bill.
* @param notIncluded The index of the item that not included.
* @param payedAmount The amount of money paid.
* @return Refund money.
*/
int bonAppetitBillDivision(vector<int> bill, int notIncluded, int payedAmount) {
    int sum = 0;
    for (int i = 0; i < bill.size(); i++) {
        if (i != notIncluded) {
            sum += bill[i];
        }
    }

    int expectedShare = sum / 2;
    return (expectedShare == payedAmount) ? 0 : payedAmount - expectedShare;
}

int main()
{
    cout << "Solution: " << bonAppetitBillDivision({3, 10, 2, 9}, 1, 7) << endl;
    return 0;
}