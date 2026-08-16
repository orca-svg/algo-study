#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w_max = 0;
    int h_max = 0;
    for(auto s : sizes){
        if(s[0]<s[1]){
            int tmp = s[1];
            s[1] = s[0];
            s[0] = tmp;
        }
        if(s[0]>w_max)  w_max = s[0];
        if(s[1]>h_max)  h_max = s[1];
    }
    answer = w_max * h_max;
    return answer;
}