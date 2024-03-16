// Link: https://www.hackerrank.com/challenges/circular-array-rotation/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method rotates the array to the right k times.
* @details This method rotates the array to the right k times. 
    It then finds the elements at the specified indices.
    Function time complexity is O(n).
* @param a The array.
* @param k The number of rotations.
* @param queries The indices.
* @return The elements at the specified indices.
*/
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> result;
    k = k % a.size();
    for (int i = 0; i < queries.size(); i++) {
        result.push_back(a[(a.size() - k + queries[i]) % a.size()]);
    }

    return result;
}


int main()
{
    cout << "Solution: ";
    vector<int> result = circularArrayRotation({3, 4, 5}, 2, {1, 2});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}