// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         A
//       B B
//     C C C
//   D D D D
// E E E E E

// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         A
//       B B
//     C C C
//   D D D D
// E E E E E

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print the character corresponding to the row number
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
