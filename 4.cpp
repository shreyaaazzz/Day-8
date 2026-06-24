// wap to evaluate power fxn using recursion
#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}

int main() {
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << "Result: " << power(base, exp) << endl;
    return 0;
}
