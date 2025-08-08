// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
// 1 8 27 64 125 216
#include <iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<<"Enter the number of rows :- ";
    cin>>rows;
    cout<<"Enter the number of columns :- ";
    cin>>cols;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= cols; j++){
            cout<<j*j*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
