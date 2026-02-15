#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    
    ifstream inputFile;
    inputFile.open("numbers.txt");

    if (!inputFile) {
        cout << "Error: Could not open numbers.txt. Please run Program 1 first." << endl;
        
        return 1;
    }

    int temp;
    double sum = 0;
    int count = 0;

    while (inputFile >> temp) {
        sum += temp;
        count++;
    }

    inputFile.close();

    if (count > 0) {

        double average = sum / count;

        cout << "Temperatures analyzed for " << count << " days." << endl;

        cout << fixed << setprecision(1);
        cout << "The average temperature was: " << average << endl;

    } else {
        cout << "The file is empty or no data was found." << endl;
    }

    return 0;
}