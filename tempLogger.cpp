#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int days;
    int temp;

    cout << "How many days of temperatures would you like to record: " << endl;
    cin >> days;
    ofstream outputFile;
    outputFile.open("numbers.txt");

    for (int i = 0; i < days; i++) {
        cout << "Enter the temperature for day " << i + 1 << ": ";
        cin >> temp;
        outputFile << temp << endl;        
    }  
    cout << "program end" << endl;
    outputFile.close();
    

    return 0;
}