// Link: https://www.hackerrank.com/challenges/service-lane/problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
* @brief This method finds the minimum width of the segment.
* @details This method finds the minimum width of the segment. 
    The actual challenge does not give width as a parameter but it is needed to solve the problem.
    Function time complexity is O(n).
* @param n The number of width measurements.
* @param width The width measurements.
* @param cases The cases.
* @return The minimum width of the segment.
*/
vector<int> serviceLane(int n, vector<int> width, vector<vector<int>> cases) {
    vector<int> result;
    for(const auto& cas: cases){
        result.push_back(*min_element(&width[cas[0]],&width[cas[1]]+1));
        
    }
    return result;
}


int main()
{
    cout << "Solution: ";
    vector<int> result = serviceLane(8, {2, 3, 1, 2, 3, 2, 3, 3}, {{0, 3}, {4, 6}, {6, 7}, {3, 5}, {0, 7}});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}