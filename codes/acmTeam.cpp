// Link: https://www.hackerrank.com/challenges/acm-icpc-team/problem
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
* @brief This method finds the maximum number of topics a team can know.
* @details This method finds the maximum number of topics a team can know. 
    It then finds the number of teams that can know the maximum number of topics.
    Function time complexity is O(n^3).
* @param topic The topics.
* @return The maximum number of topics a team can know and the number of teams that can know the maximum number of topics.
*/
vector<int> acmTeam(vector<string> topic) {
    unordered_map<int, int> topicCounts;
    int maxCount = 0;
    for (int i = 0; i < topic.size(); i++) {
        for (int j = i + 1; j < topic.size(); j++) {
            int count = 0;
            for (int k = 0; k < topic[i].size(); k++) {
                if (topic[i][k] == '1' || topic[j][k] == '1') {
                    count++;
                }
            }
            topicCounts[count]++;
            maxCount = max(maxCount, count);
        }
    }
    return {maxCount, topicCounts[maxCount]};
}

int main()
{
    cout << "Solution: ";
    vector<int> result = acmTeam({10101, 11110, 00010});
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;    return 0;
}