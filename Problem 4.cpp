#include <iostream>
#include <vector>
using namespace std;

// Declare variables
int i = 0;
int range = 0;
vector<int> output;

int main() {
    // Input values
    cout << "Enter range to filter out numbers divisible by 2 and 7: ";
    cin >> range;
    // Check for divisible numbers
    while (i < range) {
        i++;
        if ((i % 7 == 0) and (i % 2 == 0)) {
            output.push_back(i);
        }
        else {}
    }
    // Loop through output list to print out numbers
    for (int x : output) {
        cout << x << " ";
    }
    
    // End program
    return 0;
}
