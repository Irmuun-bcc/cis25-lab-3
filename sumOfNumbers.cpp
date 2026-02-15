#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a postitive number to add, or negative number to quit: ";
    cin >> n;

    int sum = 0;
    while (n > 0) {
        sum = sum + n;
        cout << "Enter a postitive number to add, or negative number to quit: ";
        cin >> n;
    }

    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}