#include <iostream>
using namespace std;

int main() {
    int n, ans = 0, mul = 1, rem;
    
    cout << "Enter an octal number: ";
    cin >> n;
    
    while (n > 0) {
        rem = n % 10;  // Get last digit of octal number
        ans = ans + (rem * mul); // Multiply by power of 8
        mul *= 8;  // Increase power of 8
        n /= 10;  // Remove last digit
    }

    cout << "Decimal Equivalent: " << ans << endl;
    return 0;
}
