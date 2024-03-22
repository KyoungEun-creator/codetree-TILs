#include <iostream>
using namespace std;

int main() {

    int sum = 0, cnt = 0;
    double ave_val;

    while(true) {

        int n;
        cin >> n;

        if (n > 29 || n < 20) {
            break;
        }
        else {
            prod += n;
            cnt++;   
        }
    }

    ave_val = (double)prod / cnt;
    cout << fixed;
    cout.precision(2);
    cout << ave_val;

    return 0;
}