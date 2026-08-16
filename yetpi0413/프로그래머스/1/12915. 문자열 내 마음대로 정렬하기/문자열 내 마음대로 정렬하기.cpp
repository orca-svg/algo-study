#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    map<int, vector<string>> dic;
    for(string s : strings){
        dic[s[n]-'a'].push_back(s);
    }
    for(auto&v : dic) {
        sort(v.second.begin(), v.second.end());
        for(string s : v.second){
            answer.push_back(s);
        }
    }
    return answer;
}