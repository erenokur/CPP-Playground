// Link: https://www.hackerrank.com/challenges/almost-sorted/problem
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
* @brief This method finds almost sorted array.
* @details Check if the array is almost sorted or not.
*     Function time complexity is O(n).
* @param an array of integers.
* @return result of almost sorted array.
*/
void almostSorted(vector<int> arr) {
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end());
    vector<int> diff;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != sorted[i]){
            diff.push_back(i);
        }
    }
    if(diff.size() == 0){
        cout << "yes" << endl;
    }
    else if(diff.size() == 2){
        cout << "yes" << endl;
        cout << "swap " << diff[0] + 1 << " " << diff[1] + 1 << endl;
    }
    else{
        reverse(arr.begin() + diff[0], arr.begin() + diff[diff.size() - 1] + 1);
        if(arr == sorted){
            cout << "yes" << endl;
            cout << "reverse " << diff[0] + 1 << " " << diff[diff.size() - 1] + 1 << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}

int main()
{
    cout << "Solution: ";
    almostSorted({1, 2, 3, 4, 5})
    return 0;
}