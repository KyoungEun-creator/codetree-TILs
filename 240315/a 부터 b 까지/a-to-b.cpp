#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << a << " ";

    for (int i = a; i < b;) {

        if (i % 2 == 1) {
            i = i * 2;
        }
        else if (i % 2 == 0) {
            i = i + 3;
        }
        if (i <= b) {
            cout << i << " ";
        }
    }
    return 0;
}