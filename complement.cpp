#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n, bit = 1;

    while (num) {
        n = n ^ bit;  // Flip the last bit
        bit = bit << 1; // Move to the next bit
        num = num >> 1; // Reduce the number
    }

    cout << n << endl;
    return 0;
}
