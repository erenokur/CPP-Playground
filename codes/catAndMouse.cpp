// url: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
#include <iostream>

using namespace std;

/**
* @brief This method finds the cat that catches the mouse first.
* @details This method calculates the distance between the cats and the mouse. 
    It then compares the distances and returns the cat that catches the mouse first. 
    If the distances are equal, it returns "Mouse C".
    Function time complexity is O(1).
* @param x The position of cat A.
* @param y The position of cat B.
* @param z The position of the mouse.
* @return The cat that catches the mouse first.
*/
string catAndMouse(int x, int y, int z) {
    int catA = abs(x - z);
    int catB = abs(y - z);
    if (catA == catB) {
        return "Mouse C";
    } else if (catA < catB) {
        return "Cat A";
    } else {
        return "Cat B";
    }
}

int main()
{
    cout << "Solution: " << catAndMouse(6, 2) << endl;
    return 0;
}