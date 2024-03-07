#include <iostream>
using namespace std;

int main() {

    double cm, kg;
    cin >> cm >> kg;
    cm = cm / 100;

    int bmi = kg / (cm * cm);

    if (bmi >= 25) {
        cout << bmi << endl << "Obesity";
    }
    else {
        cout << bmi;
    }
    return 0;
}