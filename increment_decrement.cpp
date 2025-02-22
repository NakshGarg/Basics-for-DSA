//write a c++ program that takes two integers X and Y as input. Your program should decrement X by 1 and increment Y by 1. After performing these operations, print the updated values of X and Y.

#include<iostream>
using namespace std;
int main(){
    int X, Y;
    cout << "Enter the value of X: ";
    cin >> X;
    cout << "Enter the value of Y: ";
    cin >> Y;
    X--;
    Y++;
    
    cout << "Updated values: X = " << X << ", Y = " << Y << endl;
    
    return 0;
}