// url: https://www.hackerrank.com/challenges/angry-professor/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method determines if the class is cancelled.
* @details This method iterates through the attendance list and counts the number of students who arrived on time. 
    It then compares the number of students who arrived on time with the number of students required to start the class. 
    If the number of students who arrived on time is greater than or equal to the number of students required to start the class, 
    the method returns "NO". Otherwise, it returns "YES".
    Function time complexity is O(n).
* @param acceptedStudentCount The number of students required to start the class.
* @param attendanceList The list of student arrival times.
* @return "YES" if the class is not cancelled, "NO" otherwise.
*/
string angryProfessor(int acceptedStudentCount, vector<int> attendanceList) {
    int onTimeCount = 0;
    for (int time : attendanceList) {
        if (time <= 0) {
            onTimeCount++;
        }
    }
    return onTimeCount >= acceptedStudentCount ? "NO" : "YES";
}


int main()
{
    cout << "Solution: " << angryProfessor(9, {10, 20, 20, 10, 10, 30, 50, 10, 20}) << endl;
    return 0;
}