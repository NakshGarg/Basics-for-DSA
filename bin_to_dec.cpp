#include <iostream>
using namespace std;

int main() {
    int n, ans = 0, rem, mul = 1;
    
    cout << "Enter a binary number: ";
    cin >> n;
    
    while (n > 0) {
        rem = n % 10;  // Extract last binary digit (0 or 1)
        ans = ans + (rem * mul); // Convert to decimal using powers of 2
        mul = mul * 2;  // Increase power of 2
        n = n / 10;  // Remove last digit from binary number
    }

    cout << "The decimal equivalent is: " << ans << endl;
    
    return 0;
}
