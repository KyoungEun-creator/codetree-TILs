#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    
    if (a % 2 == 0) {
        a += 1;
    }
    else {
        a = a;
    }
    if (b % 2 == 0) {
        b += 1;
    }
    else {
        b = b;
    }

    for (int i = a; i <= b; i += 2) {
        cout << i << " ";
    }
    return 0;
}