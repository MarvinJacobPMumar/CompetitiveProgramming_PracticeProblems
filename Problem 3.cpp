#include <iostream>
#include <vector>
using namespace std;

vector<int> list = {10, 21, 4, 45, 66, 93};
int even_numbers;
int odd_numbers;

int main() {
    for (int x : list) {
        if (x % 2 == 0) {
            even_numbers++;
        }
        else
        {
            odd_numbers++;
        }
    }
    cout << "Even numbers in the list: " << even_numbers << endl;
    cout << "Odd numbers in the list: " << odd_numbers << endl;
}

