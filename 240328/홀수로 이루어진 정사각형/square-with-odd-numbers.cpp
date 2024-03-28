#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << 10 + (2 * j + 2 * i - 3) << " ";
        }
        cout << endl;
    }
    return 0;
}