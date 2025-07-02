// Title: “Generate a Row-wise Decreasing Pattern with Custom Deductions”
// You are given a task to print a specific number pattern where:
// Each row starts with a unique number.
// The number of values in each row equals the row number.
// The subsequent numbers in a row are derived by subtracting increasing integers (1, 2, 3…) from the previous number.
// Example Output for 5 Rows:
// 2
// 8 7
// 13 12 10
// 17 16 14 11
// 20 19 17 14 10
// Write a program in C++ that prints this pattern for a given number of rows n.
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int start = 2;
    int diff = 6; 

    for (int row = 1; row <= n; row++) {
        int temp = start;
        cout << temp << " ";

        for (int i = 1; i < row; i++) {
            temp -= i;
            cout << temp << " ";
        }

        cout << endl;


        start = start + diff;
        diff--; 
    }

    return 0;
}
