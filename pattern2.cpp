//wap to print the pattern of solid rectangle using stars
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter how many rows and columns you want :- ";
    cin>>m;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=m; j++)
        { 
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

}

// Enter how many rows and columns you want :- 7
// 1 1 1 1 1 1 1 
// 2 2 2 2 2 2 2 
// 3 3 3 3 3 3 3 
// 4 4 4 4 4 4 4 
// 5 5 5 5 5 5 5 
// 6 6 6 6 6 6 6 
// 7 7 7 7 7 7 7 
