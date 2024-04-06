// Link: https://www.hackerrank.com/challenges/the-time-in-words/problem
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
* @brief This method converts the time to words.
* @details This method converts the time to words. 
    Function time complexity is O(1).
* @param h The hour.
* @param m The minute.
* @return The time in words.
*/
string timeInWords(int h, int m) {
    string hours[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                      "eleven", "twelve"};
    string minutes[] = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                        "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen",
                        "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four",
                        "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};
    if (m == 0) {
        return hours[h - 1] + " " + minutes[m];
    } else if (m == 1) {
        return minutes[m] + " minute past " + hours[h - 1];
    } else if (m == 15) {
        return minutes[m] + " past " + hours[h - 1];
    } else if (m == 30) {
        return minutes[m] + " past " + hours[h - 1];
    } else if (m == 45) {
        return minutes[60 - m] + " to " + hours[h];
    } else if (m == 59) {
        return minutes[60 - m] + " minute to " + hours[h];
    } else if (m < 30) {
        return minutes[m] + " minutes past " + hours[h - 1];
    } else {
        return minutes[60 - m] + " minutes to " + hours[h];
    }
}

int main()
{
    cout << "Solution: " << timeInWords(5, 47) << endl;
    return 0;
}