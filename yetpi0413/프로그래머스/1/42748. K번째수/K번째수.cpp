#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto v : commands){
        int i=v[0];
        int j=v[1];
        int k=v[2];
        vector<int> tmp = vector<int>(array.begin()+(i-1), array.begin()+j);
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[k-1]);
    }
    return answer;
}