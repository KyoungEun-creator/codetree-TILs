#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int d = a + b + c;
    int e = (a + b + c) / 3;

    cout << d << endl;
    cout << e << endl;
    cout << d - e;
    return 0;
}