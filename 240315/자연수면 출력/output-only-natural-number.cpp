#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if (a >= 1) {
        for (int i = 1; i <= b; i++) {
            cout << a;
        }
    }
    else {
        cout << "0";
    }
    return 0;
}