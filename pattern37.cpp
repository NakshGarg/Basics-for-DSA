
//          A
//        A B A
//      A B C B A
//    A B C D C B A
//  A B C D E D C B A

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch << " ";
        }

        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}
