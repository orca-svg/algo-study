#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int left = 0;
    while(n >= a){
        int tmp = n/a*b;
        answer += tmp;
        left = n%a;
        n = tmp + left;
    }
    return answer;
}