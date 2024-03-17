// Link: https://www.hackerrank.com/challenges/permutation-equation/problem
#include <iostream>
#include <vector>

using namespace std;

/**
* @brief This method finds the permutation equation.
* @details This method finds the permutation equation. 
    It then finds the elements at the specified indices.
    Function time complexity is O(n).
* @param p The array.
* @return The permutation equation.
*/
vector<int> permutationEquation(vector<int> p) {
    // Create a vector to store the position of each element.
    vector<int> pos(p.size() + 1);
    // Store the position of each element.
    for (int i = 0; i < p.size(); i++) {
        pos[p[i]] = i + 1;
    }

    vector<int> result;
    // Find the elements at the specified indices.
    for (int i = 1; i <= p.size(); i++) {
        result.push_back(pos[pos[i]]);
    }

    return result;
}

/**
* @brief This method finds the permutation equation.
* @details This method finds the permutation equation. 
    It then finds the elements at the specified indices.
    Function time complexity is O(n^2).
* @param p The array.
* @return The permutation equation.
*/
vector<int> permutationEquationLessEfficient(vector<int> p) {
    vector<int> result;
    // Find the elements at the specified indices.
    for (int i = 1; i <= p.size(); i++) {
        // Find the position of i.
        for (int j = 0; j < p.size(); j++) {
            if (p[j] == i) {
                // Find the position of j + 1.
                for (int k = 0; k < p.size(); k++) {
                    if (p[k] == j + 1) {
                        result.push_back(k + 1);
                        break;
                    }
                }
                break;
            }
        }
    }

    return result;
}

int main()
{
    cout << "Solution: ";
    vector<int> result = permutationEquation({2, 3, 1});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}