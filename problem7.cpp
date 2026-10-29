#include <iostream>
using namespace std;

int brokenCalc(int startValue, int target) {
    int ops = 0;
    while (target > startValue) {
        if (target % 2 == 0) {
            target = target / 2;
        } else {
            target = target + 1;
        }
        ops++;
    }
    return ops + startValue - target;
}

int main() {
    int s, t;
    cin >> s >> t;
    cout << brokenCalc(s, t) << endl;
    return 0;
}
