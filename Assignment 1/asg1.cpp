// COP3014 Assignment 1
// Author: <Fernando Zhu Yu>
// Date: <May 22nd, 2018>
//
// Convert a temperature from celsius to fahrenheit.
//
#include <iostream>
using namespace std;
int main() {
// Prompt user for celsius temperature.
    cout << "Please enter a temperature in celsius: " << flush;
// Read the celsius temperature.
    float celsius;
    cin >> celsius;
// Convert the celsius value to fahrenheit.
    float fahrenheit;
    fahrenheit = (9.0/5.0)*celsius + 32;
    //Print out the result.
            cout << celsius << " degrees in celsius is equal to "
                 << fahrenheit << " degrees in fahrenheit." << endl;
    return 0;
}