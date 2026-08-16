#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> dic;
    for(int i=0; i<s.length(); i++){
        if(dic.find(s[i]) != dic.end()){
            answer.push_back(i-dic[s[i]]);
        }
        else{
            answer.push_back(-1);
        }
        dic[s[i]] = i;
    }
    return answer;
}