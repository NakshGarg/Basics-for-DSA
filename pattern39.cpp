// Butterfly pattern
// It’s a symmetrical pattern that looks like a butterfly with wings stretched wide. For n = 4, it looks like this:
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (for half): ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= 2*(n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
