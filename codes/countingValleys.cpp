// url: https://www.hackerrank.com/challenges/counting-valleys/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the number of valleys traversed.
* @details This method uses a level variable to keep track of the current level. 
    It iterates through the path and updates the level. 
    If the level is 0 and the current step is an upward step, 
    it increments the valleys variable. 
    It then returns the number of valleys traversed.
    Function time complexity is O(n).
* @param steps The number of steps in the path.
* @param path The path.
* @return The number of valleys traversed.
*/
int countingValleys(int steps, string path) {
    int level = 0;
    int valleys = 0;
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            level++;
            if (level == 0) {
                valleys++;
            }
        } else {
            level--;
        }
    }
    return valleys;
}

int main()
{
    cout << "Solution: " << countingValleys(8, "UDDDUDUU") << endl;
    return 0;
}