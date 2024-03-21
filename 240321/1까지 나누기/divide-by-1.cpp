#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= 100; i++) {
        if (n <= 1) {
            cout << count;
            break;
        }
        n = n / i;
        count++;
    }
    return 0;
}