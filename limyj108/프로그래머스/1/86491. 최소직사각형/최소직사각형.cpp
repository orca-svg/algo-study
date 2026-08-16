#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    for (vector<int>& v : sizes) {
        int tmp = v[0];
        if (v[0] < v[1]) {
            v[0] = v[1];
            v[1] = tmp;
        }
    }
    
    int max_w = -1, max_h = -1;
    for (vector<int> v : sizes) {
        if (max_w < v[0]) {
            max_w = v[0];
        }
        if (max_h < v[1]) {
            max_h = v[1];
        }
    }
    return max_w * max_h;
}