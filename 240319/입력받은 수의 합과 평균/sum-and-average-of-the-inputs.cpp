#include <iostream>
using namespace std;

int main() {

    int n, sum_val = 0;
    double ave_val;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        int a;
        cin >> a;

        sum_val += a;
    }

    ave_val = (double)sum_val / n;

    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << ave_val;

    return 0;
}