#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    long long sum = 0;
    long long product = 1;
    
    for(int num : num_list) {
        sum += num;
        product *= num;
    }
    
    return product < (sum * sum) ? 1 : 0;
}