#include <iostream>
using namespace std;

int main() {

    int n, sum_val = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {

        int a;
        cin >> a;

        if (a % 2 == 1 && a % 3 == 0) {
            sum_val += a;
        }
    }
    cout << sum_val;
    return 0;
}