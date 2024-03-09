// Link: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
#include <iostream>
#include <vector>
#include <map>

using namespace std;

/**
* @brief This method finds the player's rank after each game.
* @details This method uses a map to store the ranks of the players. 
    It iterates through the ranked scores and updates the ranks. 
    It then iterates through the player scores and finds the ranks of the players. 
    It returns the ranks of the players after each game.
    Function time complexity is O(n + m).
* @param ranked The ranked scores.
* @param player The player scores.
* @return The ranks of the players after each game.
*/
vector<int> climbingLeaderBoard(vector<int> ranked, vector<int> player) {
    vector<int> result;
    std::map<int, int, std::greater<int>> ranks;
    int rank = 1;
    for (int score : ranked) {
        if (ranks.find(score) == ranks.end()) {
            ranks[score] = rank++;
        }
    }

    for (int i = 0; i < player.size(); i++) {
        auto it = ranks.lower_bound(player[i]);
        if (it == ranks.end()) {
            result.push_back(rank);
        } else {
            result.push_back(it->second);
        }
    }
    return result;
}

/**
* @brief This method finds the player's rank after each game. (Less efficient)
* @details This method uses a map to store the ranks of the players. 
    It iterates through the ranked scores and updates the ranks. 
    It then iterates through the player scores and finds the ranks of the players. 
    It returns the ranks of the players after each game.
    Function time complexity is O(n * m).
* @param ranked The ranked scores.
* @param player The player scores.
* @return The ranks of the players after each game.
*/
vector<int> climbingLeaderBoardLessEfficient(vector<int> ranked, vector<int> player) {
    vector<int> result;
    std::map<int, int, std::greater<int>> ranks;
    int rank = 1;
    for (int score : ranked) {
        if (ranks.find(score) == ranks.end()) {
            ranks[score] = rank++;
        }
    }

    rank = ranks.size() + 1;
    for (int i = 0; i < player.size(); i++) {
        for (const auto &pair : ranks) {
            if (player[i] >= pair.first) {
                rank = pair.second;
                break;
            }
        }
        result.push_back(rank);
    }
    return result;
}

int main()
{
    cout << "Solution: ";
    vector<int> result = climbingLeaderBoard({100, 100, 50, 40, 40, 20, 10}, {5, 25, 50, 120});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}