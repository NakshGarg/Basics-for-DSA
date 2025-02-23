#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    cout << "Rows? :- ";
    cin >> n;

    // Upper half
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        for (j = 1; j <= 2 * (n - i); j++) { 
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        for (j = 1; j <= 2 * (n - i); j++) { 
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

* * * * *         * * * * * 
* * * *             * * * * 
* * *                 * * * 
* *                     * * 
*                         * 
*                         * 
* *                     * * 
* * *                 * * * 
* * * *             * * * * 
* * * * *         * * * * * 
