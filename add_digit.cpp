// //Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number :- ";
    cin >> num; 

    while (num >= 10) { 
        int sum = 0;
        while (num > 0) { 
            sum += num % 10;
            num /= 10;     
        }
        num = sum; 
    }

    cout <<"The sum of the digits is :- " << num << endl;
}
