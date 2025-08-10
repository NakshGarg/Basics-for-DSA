//WAP TO CONVERT DECIMAL INTO BINARY AND VICE VERSA

#include <iostream>
using namespace std;

// Binary to Decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;       // last digit
        decimal += rem * base;   // add value
        base *= 2;               // next power of 2
        binary /= 10;            // remove last digit
    }
    return decimal;
}

// Decimal to Binary
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, rem;
    while (decimal > 0) {
        rem = decimal % 2;       // remainder
        binary += rem * base;    // place value
        base *= 10;              // shift left in binary form
        decimal /= 2;            // reduce number
    }
    return binary;
}

int main() {
    int choice;
    cout << "1. Binary to Decimal\n";
    cout << "2. Decimal to Binary\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int binary;
        cout << "Enter binary number: ";
        cin >> binary;
        cout << "Decimal: " << binaryToDecimal(binary) << endl;
    }
    else if (choice == 2) {
        int decimal;
        cout << "Enter decimal number: ";
        cin >> decimal;
        cout << "Binary: " << decimalToBinary(decimal) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
