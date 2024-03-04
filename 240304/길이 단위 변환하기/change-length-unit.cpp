#include <iostream>
using namespace std;

int main() {
    double ft = 30.48;
    int mi = 160934;
    double a = 9.2 * ft;
    double b = 1.3 * mi;

    cout << fixed;

    cout.precision(1);
    cout << "9.2ft" << " = " << a << "cm";
    cout << "\n";
    cout << "1.3mi" << " = " << b << "cm";
}