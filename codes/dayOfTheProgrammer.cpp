// url: https://www.hackerrank.com/challenges/day-of-the-programmer/problem
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

/**
* @brief This method finds the 256th day of the year in the given year.
* @details This method uses a ternary operator to determine the number of days in February for the given year. 
    It then calculates the day of the 256th day of the year and returns it in the format "dd.mm.yyyy".
    Function time complexity is O(1).
* @param year The year.
* @return The 256th day of the year in the format "dd.mm.yyyy".
*/
string dayOfTheProgrammer(int year) {
    int feb = (year == 1918) ? 15 : ((year < 1918 && year % 4 == 0) || (year > 1918 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) ? 29 : 28);
    int day = 256 - (31 + feb + 31 + 30 + 31 + 30 + 31 + 31);

    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << day << '.' << "09" << '.' << year;
    return oss.str();
}

int main()
{
    cout << "Solution: " << dayOfTheProgrammer(2024) << endl;
    return 0;
}