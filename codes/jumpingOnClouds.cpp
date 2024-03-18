#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method finds the energy level after jumping on clouds.
* @details This method finds the energy level after jumping on clouds. 
    It then calculates the energy level after jumping on clouds.
    Function time complexity is O(n).
* @param c The clouds.
* @param k The jump distance.
* @return The energy level.
*/
int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100;
    int i = 0;
    do {
        /** Calculate the next position of the character by adding k to i and taking the modulus of c.size(). 
         This ensures that the character jumps k positions forward in the array, 
         and wraps around to the beginning of the array if necessary.
        */
        i = (i + k) % c.size();
        /** Subtract from energy the value of c[i] * 2 + 1.
         c[i] is either 0 or 1, representing a normal cloud or a thundercloud, respectively. 
         Jumping on a normal cloud costs 1 energy, and jumping on a thundercloud costs 3 energy 
         (1 for the jump and 2 for the thundercloud).
        */
        energy -= c[i] * 2 + 1;
    } while (i != 0);
    return energy;
}


int main()
{
    cout << "Solution: " << jumpingOnClouds({0,0,1,0}, 2) << endl;
    return 0;
}