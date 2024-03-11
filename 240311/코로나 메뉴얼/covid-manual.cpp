#include <iostream>
using namespace std;

int main() {

    string a_sym, b_sym, c_sym;
    int a_tem, b_tem, c_tem;

    cin >> a_sym >> a_tem;
    cin >> b_sym >> b_tem;
    cin >> c_sym >> c_tem;

    if (a_sym == "Y" && a_tem >= 37) {
        if ((b_sym == "Y" && b_tem >= 37) || (c_sym == "Y" && c_tem >= 37)) {
            cout << "E";
        }
        else {
            cout << "N";
        }
    }
    else {
        if ((b_sym == "Y" && b_tem >= 37) && (c_sym == "Y" && c_tem >= 37)) {
            cout << "E";
        }
        else {
            cout << "N";
        }
    }
    return 0;
}