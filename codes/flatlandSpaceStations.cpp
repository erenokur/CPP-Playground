// Link: https://www.hackerrank.com/challenges/flatland-space-stations/problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
* @brief This method finds the maximum distance between a city and the nearest space station.
* @details This method finds the maximum distance between a city and the nearest space station. 
    Function time complexity is O(n log c).
    n is the number of cities and c is the number of space stations.
* @param n The number of cities.
* @param c The cities with space stations.
* @return The maximum distance between a city and the nearest space station.
*/
int flatlandSpaceStations(int n, vector<int> c) {
    std::sort(c.begin(), c.end());
    int maxDistance = 0;
    for (int i = 0; i < n; i++) {
        auto lower = std::lower_bound(c.begin(), c.end(), i);
        int minDistance = INT_MAX;
        if (lower != c.end()) {
            minDistance = *lower - i;
        }
        if (lower != c.begin()) {
            minDistance = std::min(minDistance, i - *(--lower));
        }
        maxDistance = std::max(maxDistance, minDistance);
    }
    return maxDistance;
}

int main()
{
    cout << "Solution: " << flatlandSpaceStations(6, {0, 1, 2, 3, 4, 5}) << endl;
    return 0;
}