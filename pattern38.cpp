// // FLOYD PATTERN
// It’s a right-angled triangle made of natural numbers. You start from 1 and keep printing numbers row-wise. 
// Each row has one more element than the previous.

// For example, if n = 5, the triangle will look like:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main() {
    int n, number = 1;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << number << " ";
            ++number;
        }
        cout << endl;
    }

    return 0;
}
