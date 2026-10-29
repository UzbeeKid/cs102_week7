#include <iostream>
using namespace std;

bool hasAlternatingBits(int n) {
    while (n > 1) {
        if (n % 2 == n / 2 % 2) {
            return false;
        }
        n = n / 2;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if (hasAlternatingBits(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
