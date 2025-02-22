//alphabet check using conditional/ternary and logical operators without using loops

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    (ch>='a' && ch<='z')||(ch>='A' && ch<='Z')?cout<<ch<<" is an alphabet":cout<<ch<<" is not an alphabet";
    return 0;
}
