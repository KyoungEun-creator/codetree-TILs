#include <iostream>
#include <string>
using namespace std;

int main() {

    int test;
    string result;
    cin >> test;

    result = test == 100 ? "pass" : "failure";
    cout << result;

    return 0;
}