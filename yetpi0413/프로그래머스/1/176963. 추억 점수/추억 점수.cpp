#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(const auto p: photo){
        int num = 0;
        for(const auto pic: p){
            auto it = find(name.begin(), name.end(), pic);
            if(it != name.end()){
                int idx = distance(name.begin(), it);
                num += yearning[idx];
            }
        }
        answer.push_back(num);
    }
    return answer;
}