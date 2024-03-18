#include <iostream>
using namespace std;

int main() {

    int a, b, cnt = 0, sum_val = 0;
    double ave_val;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum_val += i;
            cnt += 1;
        }
    }

    ave_val = (double)sum_val / cnt;

    cout << fixed;
    cout.precision(1);
    
    cout << sum_val << " " << ave_val;
    return 0;
}