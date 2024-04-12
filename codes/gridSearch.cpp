// Link: https://www.hackerrank.com/challenges/the-grid-search/problem
#include <iostream>
#include <vector>


using namespace std;

/**
* @brief This method finds if the pattern exists in the grid.
* @details This method finds if the pattern exists in the grid. 
    Function time complexity is O(n^2).
* @param G The grid.
* @param P The pattern.
* @return "YES" if the pattern exists in the grid, "NO" otherwise.
*/
string gridSearch(vector<string> G, vector<string> P) {
    for (int i = 0; i < G.size(); i++) {
        for (int j = 0; j < G[i].size(); j++) {
            if (G[i][j] == P[0][0]) {
                bool found = true;
                for (int k = 0; k < P.size(); k++) {
                    for (int l = 0; l < P[k].size(); l++) {
                        if (i + k >= G.size() || j + l >= G[i].size() || G[i + k][j + l] != P[k][l]) {
                            found = false;
                            break;
                        }
                    }
                    if (!found) {
                        break;
                    }
                }
                if (found) {
                    return "YES";
                }
            }
        }
    }
    return "NO";
}

int main()
{
    cout << "Solution: " << gridSearch(
        {
            "1234567890",  
            "0987654321",  
            "1111111111",  
            "1111111111",  
            "2222222222"  
        },
        {
            "876543",  
            "111111",  
            "111111"
        }) << endl;
    return 0;
}