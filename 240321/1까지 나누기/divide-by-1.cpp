#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; n > 1; i++) {
        n = n / i;
        count++;
        if (n <= 1) {
            break;
        }
    }
    cout << count;
    return 0;
}