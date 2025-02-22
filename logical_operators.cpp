#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter a :- ";
    cin>>a;
    cout<<"Enter b :- ";
    cin>>b;
    if(a<=10 && b>=10) {
        cout<<"true"<<" ";
    }
    else {
        cout<<"false"<<" ";
    }

    if (a%2==0 || b%2==0) {
        cout<<"true"<<" ";
    }
    else {
        cout<<"false"<<" ";
    }
    
    if (a!=b) {
        cout<<"true"<<" ";
    
    } else{
        cout<<"false"<<" ";
    }

    return 0;
}