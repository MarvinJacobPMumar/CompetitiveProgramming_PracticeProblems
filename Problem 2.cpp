#include <iostream>
using namespace std;

int num = 0;
int i = 0;
int ans = 0;

int main() {
    cout << "Enter a number to make a multiplication table of: ";
    cin >> num;
    while (i < 10) {
        i = i + 1;
        ans = num * i;
        cout << num << " x " << i << " = " << ans << endl;
        ans = 0;
    }
    return 0;
}
