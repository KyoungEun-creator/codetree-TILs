#include <iostream>
using namespace std;

int main() {

    int cnt = 0, sum_val = 0;
    double ave_val;

    for (int i = 1; i <= 10; i++) {
        
        int n;
        cin >> n;

        if (n >= 0 && n <= 200) {
            cnt += 1;
            sum_val += n;
        }
    }

    cout << fixed;
    cout.precision(1);

    ave_val = (double)sum_val / cnt;
    cout << sum_val << " " << ave_val;

}