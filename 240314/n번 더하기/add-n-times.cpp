#include <iostream>
using namespace std;

int main() {

    int a, n;
    cin >> a >> n;

    int i = 0; 
    int b = a + n;

    while (i < n) {
        cout << b << endl;
        b += n;
        i += 1;
    }
    return 0;
}