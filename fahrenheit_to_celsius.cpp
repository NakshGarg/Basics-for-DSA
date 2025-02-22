#include<iostream>
using namespace std;
int main() {
    int t;
    cout<<"Temperature in Fahrenheit = "; 
    cin>>t;
    cout<<"Temperature in Celsius = "<<(t-32)*5/9;
    return 0;  
}