//power of a number
#include<iostream>
using namespace std;
int main(){
    int n,power;
    cout<<"Enter the number :- ";
    cin>>n;
    cout<<"Enter the power :- ";
    cin>>power;
    int result=1;
    for(int i=1;i<=power;i++){
        result=result*n;
    }
    cout<<"The result is "<<result<<endl;
    return 0;

}