#include <string>
#include <vector>
#include <map>
#define MAX 51

using namespace std;

int count_diff(string src, string dst);
int dfs(string begin, string target, vector<string>& words, map<string, bool> m, int depth) ;

int solution(string begin, string target, vector<string> words) {
    map<string, bool> m;
    for (string word : words) {
        m[word] = false;
    }
    int result = dfs(begin, target, words, m, 0);
    if (result == MAX)
        return 0;
    else
        return result;
}

int dfs(string begin, string target, vector<string>& words, map<string, bool> m, int depth) {
    if (begin == target)
        return depth;
    
    m[begin] = true;
    int dpt = MAX;
    for (string word : words) {
        if (m[word])
            continue;
        if (count_diff(begin, word) == 1) {
            dpt = min(dfs(word, target, words, m, depth + 1), dpt);
        }
    }
    return dpt;
}

int count_diff(string src, string dst) {
    size_t len = src.length();
    int diff = 0;
    for (int i = 0; i < len; i++) {
        if (src[i] != dst[i]) {
            diff++;
        }
    }
    return diff;
}