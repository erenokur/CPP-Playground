#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int jumpingRooks(int k, vector<string> board) {
    vector<int> rows(k, 0);
    vector<int> cols(k, 0);
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            if(board[i][j] == 'R'){
                rows[i]++;
                cols[j]++;
            }
        }
    }
    int result = 0;
    for(int i = 0; i < k; i++){
        if(rows[i] == 0){
            result++;
        }
        if(cols[i] == 0){
            result++;
        }
    }
    return result;
}

int main()
{
    cout << "Solution: ";
    cout << jumpingRooks(3, {"...", "...", "..."}) << endl;
    return 0;
}