// url: https://www.hackerrank.com/challenges/sock-merchant/problem
#include <iostream>
#include <vector>
#include <map>

using namespace std;

/**
* @brief This method finds the number of pairs of socks with matching colors.
* @details This method uses a map to store the occurrences of each color. 
    It iterates through the array and updates the occurrences of each color. 
    It also keeps track of the number of pairs of socks with matching colors.
    Function time complexity is O(n).
* @param ar The array of colors.
* @param n The number of socks.
* @return The number of pairs of socks with matching colors.
*/
int sockMerchant(vector<int> ar, int n) {
    std::map<int, int> occurrences;
    int pairs = 0;

    for (int num : ar) {
        occurrences[num]++;
        if (occurrences[num] % 2 == 0) {
            pairs++;
        }
    }

    return pairs;
}

int main()
{
    cout << "Solution: " << sockMerchant({10, 20, 20, 10, 10, 30, 50, 10, 20}, 9) << endl;
    return 0;
}