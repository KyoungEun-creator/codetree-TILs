#include <iostream>
using namespace std;

int main() {

    int n, room_cnt = 0, hall_cnt = 0, bathroom_cnt = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
        if (i % 12 == 0) {
            bathroom_cnt++;
        }
        else if (i % 3 == 0) {
            hall_cnt++;
        }
        else if (i % 2 == 0) {
            room_cnt++;
        }
    }

    cout << room_cnt << " " << hall_cnt << " " << bathroom_cnt;
    return 0;
}