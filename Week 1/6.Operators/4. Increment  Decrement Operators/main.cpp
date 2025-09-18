#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << a++ << " ";  // prints 5, then a=6
    cout << ++a;         // increments to 7, then prints 7
    return 0;
}
