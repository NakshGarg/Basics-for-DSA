// WAP TO CONVERT DECIMAL INTO OCTAL AND VICE VERSA
#include <iostream>
using namespace std;

// Octal to Decimal
int octalToDecimal(int octal) {
    int decimal = 0, base = 1, rem;
    while (octal > 0) {
        rem = octal % 10;        // last digit
        decimal += rem * base;   // add value
        base *= 8;               // next power of 8
        octal /= 10;             // remove last digit
    }
    return decimal;
}

// Decimal to Octal
int decimalToOctal(int decimal) {
    int octal = 0, base = 1, rem;
    while (decimal > 0) {
        rem = decimal % 8;       // remainder
        octal += rem * base;     // place value
        base *= 10;              // shift left in octal form
        decimal /= 8;            // reduce number
    }
    return octal;
}

int main() {
    int choice;
    cout << "1. Octal to Decimal\n";
    cout << "2. Decimal to Octal\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int octal;
        cout << "Enter octal number: ";
        cin >> octal;
        cout << "Decimal: " << octalToDecimal(octal) << endl;
    }
    else if (choice == 2) {
        int decimal;
        cout << "Enter decimal number: ";
        cin >> decimal;
        cout << "Octal: " << decimalToOctal(decimal) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
