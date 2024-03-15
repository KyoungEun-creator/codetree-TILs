#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    // cout << a << " ";

    // for (int i = a; i < b;) {
    //     if (i % 2 == 1) {
    //         i = i * 2;
    //     }
    //     else if (i % 2 == 0) {
    //         i = i + 3;
    //     }
    //     if (i <= b) {
    //         cout << i << " ";
    //     }
    // }

    int i;
    i = a;

    while (i <= b) {
        cout << i << " ";
        if (i % 2 == 1) {
            i *= 2;
        }
        else {
            i += 3;
        }
    }
    return 0;
}