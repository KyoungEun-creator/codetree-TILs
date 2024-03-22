#include <iostream>
using namespace std;

int main() {

    int n, cnt = 0;
    cin >> n;

    while(true) {
        
        if (n % 2 == 0) {
            n = n * 3 + 1;
            cnt++;
        }
        else if (n % 2 == 1) {
            n = n * 2 + 2;
            cnt++;
        }
        if (n >= 1000) {
            cout << cnt;
            break;
        }
    }
    return 0;
}