#include <iostream>
using namespace std;

int main() {

    int n, x = 0;
    cin >> n;

    while(true) {
        if (n != 2 * x) {
            x++;
        }
        else {
            break;
        }
    }
    cout << x;
    return 0;
}