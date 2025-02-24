#include<iostream>

using namespace std;

int main() {
    int num, ans = 0, rem, mul = 1;
    cout << "Enter a decimal number: ";
    cin >> num;
    
    while (num > 0) {
        rem = num % 2;  // Get the remainder (0 or 1)
        ans = rem * mul + ans; // Place it in correct binary position
        mul = mul * 10; // Shift place value in binary (powers of 10)
        num = num / 2;  // Reduce the decimal number
    }

    cout << "The binary equivalent is: " << ans << endl;
    return 0;
}
