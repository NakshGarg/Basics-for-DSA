//sum of n natural numbers 
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    // for (int i = 1; i <= n; i++){
    //     sum += i;
    // }
    // cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;

    cout<<(n*(n+1))/2<<endl;

    return 0;
}