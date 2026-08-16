#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    for (int r = 0; r < b; r++) {
        for (int c = 0; c < a; c++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}