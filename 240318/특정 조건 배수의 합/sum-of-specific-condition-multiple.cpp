#include <iostream>
using namespace std;

int main() {

    int a, b;
    int sum_val = 0;
    cin >> a >> b;

    int start = min(a, b);
    int end = max(a, b);

    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            sum_val += i;
        }
    }

    cout << sum_val;
    
    return 0;
}