#include <iostream>
using namespace std;

int main() {

    int count = 0;

    while(true) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << endl;
            count++;
            if (count == 3) {
                break;
            }
        }
    }
    return 0;
}