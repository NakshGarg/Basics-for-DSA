//         E
//       E D
//     E D C
//   E D C B
// E D C B A

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        char ch = 'E';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch--; 
        }
        cout << endl;
    }

    return 0;
}
