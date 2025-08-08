//Pascal triangle
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = 1; // First number in every row is always 1

        // Print spaces to center-align
        for (int space = 0; space < rows - i - 1; space++) {
            cout << "  ";
        }

        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            cout << num << "   "; // Print the number
            num = num * (i - j) / (j + 1); // Generate next number
        }

        cout << endl;
    }

    return 0;
}
