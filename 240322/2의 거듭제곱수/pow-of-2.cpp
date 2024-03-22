#include <iostream>
using namespace std;

int main() {

    int n, x = 1;
    cin >> n;

    while(true) {
        if (n / 2 != 1) {
            x++;
            n /= 2;
        }
        else {
            break;
        }
    }
    cout << x;
    return 0;
}