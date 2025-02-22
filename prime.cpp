//wap to check prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to be checked :- ";
    cin>>n;
    for (int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number";
            break;
        }
        else{
            cout<<"Prime number";
            break;
        }
    }
    return 0;

}