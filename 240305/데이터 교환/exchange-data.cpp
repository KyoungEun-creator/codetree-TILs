#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp;
    int temp2;

    temp = a;
    a = c;
    c = b;
    b = temp;

    cout << a << endl << b << endl << c;

    return 0;
}