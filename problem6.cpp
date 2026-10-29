#include <iostream>
using namespace std;

int minOperations(int n) {
    int ops = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            ops++;
            if (n % 4 == 3) {
                n = n + 1;
            } else {
                n = n - 1;
            }
        }
    }
    return ops;
}
int main() {
    int n;
    cin >> n;
    cout << minOperations(n) << endl;
    return 0;
}
