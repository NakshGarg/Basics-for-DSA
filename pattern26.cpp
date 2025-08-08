// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++) {
        for (char ch = 'F'; ch < 'F' + cols; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
