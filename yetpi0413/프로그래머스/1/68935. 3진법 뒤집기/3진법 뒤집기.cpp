#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    string three = "";
    int l = 0;
    while(n>=3){
        three += (char)(n%3 + 48);
        n /= 3;
        l++;
    }
    three[l] = (char)(n+48);
    for(int i=0; i<=l; i++){
        answer += pow(3, l-i)*(three[i]-'0');
    }
    return answer;
}