#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> positions;
    for (int i = 0; i < players.size(); i++) {
        positions[players[i]] = i;
    }
    
    for (const string& called_player : callings) {
        int current_idx = positions[called_player];
        
        int prev_idx = current_idx - 1;
        string prev_player = players[prev_idx];
        
        players[prev_idx] = called_player;
        players[current_idx] = prev_player;
        
        positions[called_player] = prev_idx;
        positions[prev_player] = current_idx;
    }
    
    return players;
}