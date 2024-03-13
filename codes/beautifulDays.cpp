// Link: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
#include <iostream>
#include <algorithm>


using namespace std;

/**
* @brief This method determines the number of beautiful days in a range.
* @details This method iterates through the range of days and counts the number of beautiful days. 
    It converts numbers to string and reverse it then convert it to int again.
    then it compares the difference between the original day and the reversed day with the divisor.
    If the difference is divisible by the divisor, the method increments the count of beautiful days.
    It then returns the count of beautiful days.
    Function time complexity is O(n * m) where n is is the number of days and m is the number of digits in each day.
    However, in practice, the number of digits in the day (m) is likely to be much smaller than the number of days (n), 
    so the time complexity is likely to be dominated by the O(n).
* @param i The start of the range.
* @param j The end of the range.
* @param k The divisor.
* @return The number of beautiful days in the range.
*/
int beautifulDaysStringReverse(int i, int j, int k) {
    int count = 0;
    for (int day = i; day <= j; day++) {
        std::string dayStr = std::to_string(day);
        std::reverse(dayStr.begin(), dayStr.end());
        int reversedDay = std::stoi(dayStr);
        if (abs(day - reversedDay) % k == 0) {
            count++;
        }
    }
    return count;
}

/**
* @brief This method determines the number of beautiful days in a range.
* @details This method iterates through the range of days and counts the number of beautiful days. 
    It then returns the count of beautiful days.
    Function time complexity is O(n * m) where n is is the number of days and m is the number of digits in each day.
    However, in practice, the number of digits in the day (m) is likely to be much smaller than the number of days (n),
    so the time complexity is likely to be dominated by the O(n).
* @param i The start of the range.
* @param j The end of the range.
* @param k The divisor.
* @return The number of beautiful days in the range.
*/
int beautifulDays(int i, int j, int k) {
    int count = 0;
    for (int day = i; day <= j; day++) {
        int reversedDay = 0;
        int temp = day;
        while (temp > 0) {
            reversedDay = reversedDay * 10 + temp % 10;
            temp /= 10;
        }
        if ((day - reversedDay) % k == 0) {
            count++;
        }
    }
    return count;
}

int main()
{
    cout << "Solution: " << beautifulDays(20, 23, 6) << endl;
    return 0;
}