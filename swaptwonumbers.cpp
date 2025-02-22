// //swap two numbers using a third variable
// // #include<iostream>
// // using namespace std;
// // int main() {
// //     int a, b, temp;
// //     cout<<"Enter the first number :- ";
// //     cin>>a;
// //     cout<<"Enter the second number :- ";
// //     cin>>b;
// //     cout<<"Before swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;
// //     temp = a;
// //     a = b;
// //     b=temp;
// //     cout<<"After swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;
// //     return 0;
// // }

// //swap two numbers without using a third variable
// #include<iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout<<"Enter the first number :- ";
//     cin>>a;
//     cout<<"Enter the second number :- ";
//     cin>>b;
//     cout<<"Before swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;
    
//     a = b;
//     b = a;
//     cout<<"After swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;
//     return 0;
// }

// swap two numbers using XOR operation

// #include<iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cout<<"Enter the first number :- ";
//     cin>>a;
//     cout<<"Enter the second number :- ";
//     cin>>b;
//     cout<<"Before swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;

//     a = a^b;
//     b = a^b;
//     a = a^b;
//     cout<<"After swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;
//     return 0;
// }

// swap two numbers using addition and subtraction

#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout<<"Enter the first number :- ";
    cin>>a;
    cout<<"Enter the second number :- ";
    cin>>b;
    cout<<"Before swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;

    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping the numbers are :- a = "<<a<<" , b = "<<b<<endl;
    return 0;
}