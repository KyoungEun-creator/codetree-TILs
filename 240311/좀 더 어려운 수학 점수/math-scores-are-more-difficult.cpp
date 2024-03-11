#include <iostream>
using namespace std;

int main() {

    int am, ae;
    cin >> am >> ae;
    int bm, be;
    cin >> bm >> be;

    if (am > bm || (am == bm && ae > be))
        cout << "A";
    else
        cout << "B";

    return 0;
}