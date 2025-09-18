#include <iostream>
using namespace std;

int main() {
    int x = 5;   // only once

    cout << "Initial x = " << x << endl;

    x += 3;   // x = 5 + 3 = 8
    cout << "After x += 3 → " << x << endl;

    x -= 3;   // x = 8 - 3 = 5
    cout << "After x -= 3 → " << x << endl;

    x *= 3;   // x = 5 * 3 = 15
    cout << "After x *= 3 → " << x << endl;

    x /= 3;   // x = 15 / 3 = 5
    cout << "After x /= 3 → " << x << endl;

    x %= 3;   // x = 5 % 3 = 2
    cout << "After x %= 3 → " << x << endl;

    x &= 3;   // 2 (0010) & 3 (0011) = 2
    cout << "After x &= 3 → " << x << endl;

    x |= 3;   // 2 (0010) | 3 (0011) = 3
    cout << "After x |= 3 → " << x << endl;

    x ^= 3;   // 3 (0011) ^ 3 (0011) = 0
    cout << "After x ^= 3 → " << x << endl;

    x = 5;    // reset for shifting demo
    x >>= 1;  // 5 (0101) >> 1 = 2 (0010)
    cout << "After x >>= 1 → " << x << endl;

    x = 5;  
    x <<= 1; 
    cout << "After x <<= 1 → " << x << endl;

    return 0;
}
