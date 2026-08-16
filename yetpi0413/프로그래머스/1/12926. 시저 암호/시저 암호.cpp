#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c :s){
        if(c==' '){
            answer += c;
            continue;
        }
        if(c<='Z')   c = (c-'A'+n)%26 + 'A';
        else    c = (c-'a'+n)%26 + 'a';
        answer += c;
    }
    return answer;
}