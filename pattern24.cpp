// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

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
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
