#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            cout << "*"; 
        }
        else {
            for (int j = 0; j < i + 1; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}