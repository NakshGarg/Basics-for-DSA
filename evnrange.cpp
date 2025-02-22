//Wap to display all even numbers between 1 and n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}