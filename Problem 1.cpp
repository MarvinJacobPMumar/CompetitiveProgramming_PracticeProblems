#include <iostream>
using namespace std;
int i = 0;
int sum = 0;

int main() {
    while (i < 5) {
        i = i + 1;
        sum = sum + i;
    }
    cout << "The sum from 1 to 5 is " << sum;
    return 0;
}
