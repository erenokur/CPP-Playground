#include <iostream>

using namespace std;

int drawingBook(int n, int p) {
    return std::min(p / 2, n / 2 - p / 2);
}

int main()
{
    cout << "Solution: " << drawingBook(6, 2) << endl;
    return 0;
}