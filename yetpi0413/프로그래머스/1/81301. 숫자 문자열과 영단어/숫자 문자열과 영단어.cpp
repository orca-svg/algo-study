#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> num;
    for(int i=0; i<s.length(); i++){
        if((s[i]>='a' && s[i]<='z') || s[i]>='A' && s[i]<='Z'){
            char c = tolower(s[i]);
            switch(c)
            {
                case 'z':
                    num.push_back(0);
                    i += 3;
                    break;
                case 'o':
                    num.push_back(1);
                    i += 2;
                    break;
                case 't':
                    switch(tolower(s[i+1]))
                    {
                        case 'w':
                            num.push_back(2);
                            i += 2;
                            break;
                        case 'h':
                            num.push_back(3);
                            i+=4;
                            break;
                    }
                    break;
                case 'f':
                    switch(tolower(s[i+1]))
                    {
                        case 'o':
                            num.push_back(4);
                            i+=3;
                            break;
                        case 'i':
                            num.push_back(5);
                            i+=3;
                            break;
                    }
                    break;
                case 's':
                    switch(tolower(s[i+1]))
                    {
                        case 'i':
                            num.push_back(6);
                            i+=2;
                            break;
                        case 'e':
                            num.push_back(7);
                            i+=4;
                            break;
                    }
                    break;
                case 'e':
                    num.push_back(8);
                    i+=4;
                    break;
                case 'n':
                    num.push_back(9);
                    i+=3;
                    break;
            }
        }
        else{
            num.push_back(s[i]-'0');
        }
    }
    for(int i=num.size()-1; i>=0; i--){
        answer += num[i]*pow(10, num.size()-(i+1));
    }
    return answer;
}