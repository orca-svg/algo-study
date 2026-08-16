#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> list;
    for(int n : score){
        list.push_back(n);
        sort(list.begin(), list.end(), greater<int>());
        if(list.size()>k){
            list.pop_back();
        }
        int min = list.back();
        answer.push_back(min);
    }
    return answer;
}