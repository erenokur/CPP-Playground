// Link: https://www.hackerrank.com/challenges/cavity-map/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method finds the cavity map.
* @details This method finds the cavity map. 
    Function time complexity is O(n^2).
* @param grid The grid.
* @return The cavity map.
*/
vector<string> cavityMap(vector<string> grid) {
    for(int i = 1; i < grid.size() - 1; i++) {
        for(int j = 1; j < grid[i].size() - 1; j++) {
            if(grid[i][j] > grid[i - 1][j] && grid[i][j] > grid[i + 1][j] && grid[i][j] > grid[i][j - 1] && grid[i][j] > grid[i][j + 1]) {
                grid[i][j] = 'X';
            }
        }
    }
    return grid;
}


int main()
{
    cout << "Solution: ";
    vector<string> result = cavityMap({"1112", "1912", "1892", "1234"});
    for(const auto& s: result){
        cout << s << " ";
    }
    cout << endl;   
     return 0;
}