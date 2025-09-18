#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    // Using ternary operator
    int max_val = (x > y) ? x : y;

    cout << "The maximum value is " << max_val;
    return 0;
}