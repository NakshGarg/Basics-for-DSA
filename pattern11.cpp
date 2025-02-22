#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    char ch = 'a';

    for (int i = 1; i <= n; i++) {
        // Print characters in the row
        for (int j = 1; j <= i; j++) {
            cout << ch << "  ";
        }
        cout << endl;
        ch++; // Move to the next character
    }

    return 0;
}
