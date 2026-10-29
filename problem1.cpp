#include <iostream>
using namespace std;

int toMinutes(int h, int m) {
    return h * 60 + m;
}

int convertTime(int current, int correct) {
    int diff = correct - current,c1 = 0;
    while (diff >= 60) {diff -= 60; c1++;}
    while (diff>=15){diff -= 15;c1++;}
    while (diff>=5){diff -= 5;c1++;}
    while (diff>=1){diff -= 1;c1++;}
    return c1;
}

int main() {
    int h1, m1, h2, m2;
    char colon;
    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;
    cout << convertTime(toMinutes(h1, m1), toMinutes(h2, m2)) ;
    return 0;
}
