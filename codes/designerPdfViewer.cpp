// Link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method determines the area of the highlighted word.
* @details This method iterates through the word and finds the maximum height of the letters. 
    It then multiplies the maximum height of the letters with the length of the word. 
    Function time complexity is O(n).
* @param h The list of letter heights.
* @param word The highlighted word.
* @return The area of the highlighted word.
*/
int designerPdfViewer(vector<int> h, string word) {
    int maxHeight = 0;
    for (char c : word) {
        /**
        In C++, characters are internally represented as integers according to the ASCII standard. 
        In ASCII, lowercase 'a' is represented by the number 97, 'b' is 98, and so on. 
        'b' - 'a' will be 1 and 'c' - 'a' will be 2.
        this will give us the index of the letter in the list of letter heights.
        */
        int index = c - 'a';
        if (h[index] > maxHeight) {
            maxHeight = h[index];
        }
    }
    return maxHeight * word.length();
}

int main()
{
    cout << "Solution: " << angryProfessor({1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5}, "abc") << endl;
    return 0;
}