#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << "0.";

    for (int i = 0; i < 20; i++) {
        cout << (a * 10) / b;
        a = (a * 10) % b;
    }

    return 0;
}