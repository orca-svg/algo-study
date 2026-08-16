#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int t = 2, w = truck_weights[0], idx = 1;
    queue<pair<int, int>> q;
    q.push({ truck_weights[0], 1 });
    
    while (idx < truck_weights.size()) {
        if (t - q.front().second >= bridge_length) {
            w -= q.front().first;
            q.pop();
        }
        if (truck_weights[idx] + w <= weight) {
            q.push({truck_weights[idx], t});
            w += truck_weights[idx++];
            t++;
        }
        else {
            t = q.front().second + bridge_length;
        }
    }
    return q.back().second + bridge_length;
}