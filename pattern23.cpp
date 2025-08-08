// 4 4 4 4 4 4
// 4 4 4 4 4 4
// 4 4 4 4 4 4  
// 4 4 4 4 4 4
// 4 4 4 4 4 4 

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
            cout<<"4 ";
        }
        cout<<endl;
    }
    return 0;
}