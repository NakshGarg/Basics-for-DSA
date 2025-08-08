//             1
//           1 2 3
//        1 2 3 4 5
//     1 2 3 4 5 6 7
//  1 2 3 4 5 6 7 8 9


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout <<"  "<<j<<"  ";
        }
        cout << endl;
    }
    return 0;
}
