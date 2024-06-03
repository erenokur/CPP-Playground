// Link: https://www.hackerrank.com/challenges/bomber-man/problem
#include <iostream>
#include <vector>

using namespace std;

/*
* @brief This method explodes the bombs.
* @details This method explodes the bombs. 
    It checks if the bomb is at the edge of the grid before exploding.
    Function time complexity is O(n*m).
* @param grid The grid.
* @param result The result grid.
*/
void explode(vector<string>* grid, vector<string>* result){
    for(int row = 0; row<(*grid).size(); row++){
        for(int col = 0; col<(*grid)[0].size(); col++){
            if((*grid)[row][col] == 'O') {
                (*result)[row][col] = '.';
                if (col-1>=0) (*result)[row][col-1] = '.';
                if (row-1>=0) (*result)[row-1][col] = '.';
                if (col+1<(*result)[0].size()) (*result)[row][col+1] = '.';
                if (row+1<(*result).size()) (*result)[row+1][col] = '.';
            }
        }
     }
}

/*
* @brief This method finds the grid after n seconds.
* @details This method finds the grid after n seconds. 
    It first checks if n is 1, if so, it returns the original grid.
    If n is even, it returns a grid with all bombs.
    If n is odd, it explodes the bombs and checks if n-3 or n-5 is divisible by 4.
    Function time complexity is O(n*m).
* @param n The number of seconds.
* @param grid The grid.
* @return The grid after n seconds.
*/
vector<string> bomberMan(int n, vector<string> grid) {
    if(n == 1)
    {
        return grid;
    } 
    string row(grid[0].size(), 'O');
    vector<string> result(grid.size(), row);
    if(n%2 == 0)
    {
        return result;
    }

    explode(&grid, &result);
    if((n-3)%4 == 0)
    {
        return result;
    } 
    grid = result;
    fill(result.begin(), result.end(), row);
    if((n-5)%4 == 0){
        explode(&grid, &result);
        return result;
    }

    return {"*"};
}


int main()
{
cout << "Solution: ";
    vector<string> result = bomberMan(6, {".O.", "..O", "OO."});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}