#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int N;
vector<string> cities;
bool dfs(string begin, int n, vector<vector<string>>& tickets, vector<bool>& visited);

vector<string> solution(vector<vector<string>> tickets) {
    N = tickets.size();
    vector<string> answer;
    vector<bool> visited(N, false);

    sort(tickets.begin(), tickets.end(), [](vector<string>& a, vector<string>& b) { return a[1] < b[1]; });
    cities.push_back("ICN");
    
    dfs("ICN", 0, tickets, visited);
    return cities;
}

bool dfs(string begin, int n, vector<vector<string>>& tickets, vector<bool>& visited) {
    if (n == N) {
        return true;
    }
    
    for (int i = 0; i < N; i++) {
        if (visited[i])
            continue;
        
        if (tickets[i][0] == begin) {
            visited[i] = true;
            cities.push_back(tickets[i][1]);
            if (dfs(tickets[i][1], n + 1, tickets, visited)) {
                return true;
            }
            visited[i] = false;
            cities.pop_back();
        }
    }
    return false;
}