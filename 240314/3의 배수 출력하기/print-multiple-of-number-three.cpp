#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while (3 * i <= n) {
        cout << 3 * i << " ";
        i++;
    }
    return 0;
}