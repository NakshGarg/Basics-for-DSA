#include <iostream>
using namespace std;

int main() {
    for (int j = 0; j < 5; j++) {
        for (char ch = 'a'; ch <= 'e'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}