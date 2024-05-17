// Link: https://www.hackerrank.com/challenges/manasa-and-stones/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method guess the value of the last stone.
* @details This method guess the value of the last stone. 
    Function time complexity is O(n).
* @param n The number of non-zero stones found.
* @param a One possible difference .
* @param b The other possible difference.
* @return All possible values of the last stone, sorted ascending.
 */
vector<int> stones(int n, int a, int b) {
    vector<int> result;
    if (a == b) {
        result.push_back(a * (n - 1));
    } else {
        for (int i = 0; i < n; i++) {
            result.push_back(i * a + (n - 1 - i) * b);
        }
        sort(result.begin(), result.end());
    }
    return result;
}


int main()
{
    cout << "Solution: ";
    vector<int> result = stones(2, 2, 3);
    for(const auto& s: result){
        cout << s << " ";
    }
    cout << endl;   
     return 0;
}