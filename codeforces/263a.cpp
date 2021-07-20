//alokkumar0723
#include <iostream>
#include <algorithm>
using namespace std;
int b, x, y, z;
int main() {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            cin >> b;
            if (b == 1) {
                x = i;
                y = j;
            }
        }
    }
    z = abs(x - 3) + abs(y - 3);
    cout << z;
}