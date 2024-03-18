#include <iostream>

using namespace std;

int main() {
    int a, b, sum_value = 0;
    cin >> a >> b;
    
    if(a <= b) {
        for(int i = a; i <= b; i++)
            if(i % 5 == 0)
                sum_value += i;
    }
    else {
        for(int i = b; i <= a; i++)
            if(i % 5 == 0)
                sum_value += i;
    }
    
    cout << sum_value;
    return 0;
}