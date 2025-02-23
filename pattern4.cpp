//wap to print the pattern of solid rectangle using stars
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter how many rows and columns you want :- ";
    cin>>m;
    for (int i=1; i<=m; i++)
    {
        for (int j=m; j>=1; j--)
        { 
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}

// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
