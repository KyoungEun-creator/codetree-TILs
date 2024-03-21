#include <iostream>
using namespace std;

int main() {

    while(true) {

        int n;
        cin >> n;

        if (n == 25) {
            cout << "Good";
            break;
        }
        if (n <= 25) {
            cout << "Higher" << endl;
        }
        if (n >= 25) {
            cout << "Lower" << endl;
        }
    }
    return 0;
}