#include <iostream>
using namespace std;

int main() {

    while(true) {
        
        int w, h;
        cin >> w >> h;
        char n;
        cin >> n;

        cout << w * h << endl;

        if (n == 'C') {
            break;
        }
    }
    return 0;
}