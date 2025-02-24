#include <iostream>
using namespace std;

int main() {
    int n, ans = 0, mul = 1, rem;
    
    cout << "Enter a decimal number: ";
    cin >> n;
    
    while (n > 0) {
        rem = n % 8;  // Get remainder (octal digit)
        ans = rem * mul + ans; // Construct the octal number
        mul *= 10;  // Move to the next place value
        n /= 8;  // Reduce the decimal number
    }

    cout << "Octal Equivalent: " << ans << endl;
    return 0;
}
