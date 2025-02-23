#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        int num = 5;
        for (int j = 1; j <= i; j++) {
            cout << num-- << " ";
        }
        cout << endl;
    }

    return 0;
}

// 5  
// 5 4  
// 5 4 3  
// 5 4 3 2  
// 5 4 3 2 1  
