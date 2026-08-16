#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string tmp = "";
    for(int i=1; i<food.size(); i++){
        int level = food[i]/2;
        string s1(level, i + '0');
        tmp += s1;
    }
    answer += tmp;
    answer += '0';
    reverse(tmp.begin(), tmp.end());
    answer += tmp;
    return answer;
}