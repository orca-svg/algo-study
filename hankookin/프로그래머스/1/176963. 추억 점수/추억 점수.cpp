#include <string>
#include <vector>

using namespace std;
#include <unordered_map>

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> scores;
    for (int i=0; i<name.size(); i++) {
        scores[name[i]] = yearning[i];
    }
    for (int i=0; i<photo.size(); i++) {
        int score = 0;
        for (int j=0; j<photo[i].size(); j++) {
            if (scores.find(photo[i][j]) != scores.end()) {
                score += scores[photo[i][j]];
            }
        }
        answer.push_back(score);
    }
    return answer;
}