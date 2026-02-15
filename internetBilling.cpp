#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    char package;
    int hoursUsed;
    double totalBill;
    double baseRate;

    cout<< "Package A: For $9.95 per month, 10 hours of access are provided. Additional hours are $2.00 per hour." << endl;
    cout<< "Package B: For $14.95 per month, 20 hours of access are provided. Additional hours are $1.00 per hour." << endl;
    cout<< "Package C: For $19.95 per month, unlimited access is provided." << endl;
    
    cout << "Enter your package (A, B, or C): ";
    cin >> package;

    cout << "Enter the number of hours used: ";
    cin >> hoursUsed;
    
    if (package == 'A' || package == 'a') {
        
        if (hoursUsed >= 10) {

            totalBill = 9.95;
            totalBill = totalBill + (hoursUsed - 10) * 2.00;
            cout << "Total bill: $" << totalBill << endl;
        } else {

            totalBill = 9.95 * hoursUsed;
            cout << "Total bill: $" << totalBill << endl;
        }
    } 
    else if (package == 'B' || package == 'b') {

        if (hoursUsed >= 20) {

            totalBill = 14.95;
            totalBill = totalBill + (hoursUsed - 20) * 1.00;
            cout << "Total bill: $" << totalBill << endl;
        } else {

            totalBill = 14.95 * hoursUsed;
            cout << "Total bill: $" << totalBill << endl;
        }
    } 
    else if (package == 'C' || package == 'c') {

        cout << "Total bill: $19.95" << endl;
    } 
    else {

        cout << "Invalid package selection." << endl;
    
    }
    


    return 0;
}