// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int start = 10;
        for (int j = 1; j <= i; j++) {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }

    return 0;
}