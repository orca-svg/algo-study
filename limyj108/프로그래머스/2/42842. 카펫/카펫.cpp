#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int half = brown / 2;
    for (int h = 2; h <= half; h++) {
        int w = half - h + 2;
        if ((w - 2) * (h - 2) == yellow) {
            answer.push_back(w);
            answer.push_back(h);
            break;
        }
    }
    return answer;
}