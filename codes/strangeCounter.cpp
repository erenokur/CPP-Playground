// Link: https://www.hackerrank.com/challenges/strange-code/problem
#include <iostream>

using namespace std;

/*
* @brief This method determines the value of the counter at time t.
* @details This method determines the value of the counter at time t. 
    Function time complexity is O(log(t)).
* @param t The time.
* @return The value of the counter at time t.
*/
long strangeCounter(long t) {
    long rem = 3;
    while (t > rem) {
        t -= rem;
        rem *= 2;
    }
    return rem - t + 1;
}


int main()
{
    cout << "Solution: " << strangeCounter(4) << endl;
    return 0;
}