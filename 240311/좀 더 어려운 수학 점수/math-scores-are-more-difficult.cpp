#include <iostream>
using namespace std;

int main() {

    int am, ae;
    cin >> am >> ae;
    int bm, be;
    cin >> bm >> be;

    if (am > bm)
        cout << "A";
    else if (am < bm)
        cout << "B";
    else if (am == bm && ae > be)
        cout << "A";
    else if (am == bm && ae < be)
        cout << "B";
    return 0;
}