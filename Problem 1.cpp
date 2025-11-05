#include <iostream>
using namespace std;

int i = 0;
int num = 0;
int x = 0;

int main() {
    cout << "Enter number: ";
    cin >> num;
    while (i < num) {
        i = i + 1;
        x = x + i;
    }
    cout << "The sum from 1 to " << num << " is " << x << ".";
    
    return 0;
}
