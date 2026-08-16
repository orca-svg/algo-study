#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<n; i++){
        int s1 = arr1[i] & arr2[i];
        int s2 = arr1[i] ^ arr2[i];
        int sum = s1 | s2;
        
        string s = "";
        for(int j=0; j<n; j++){
            s = (sum%2 == 1? "#":" ") + s;
            sum /= 2;
        }
        answer.push_back(s);
    }
    
    return answer;
}