#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++) {       
        for (int j = n - i; j <= n; j++) { 
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}