// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
// Example 1:
// Input: x = 123
// Output: 321
// Example 2:
// Input: x = -123
// Output: -321
// Example 3:
// Input: x = 120
// Output: 21
#include <iostream>
using namespace std;

int main() {
    int x, rev = 0;
    cin >> x;

    while (x) {
        if (rev > 214748364 || rev < -214748364) {
            cout << 0 << endl;
            return 0;
        }
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    cout << rev << endl;
    return 0;
}
