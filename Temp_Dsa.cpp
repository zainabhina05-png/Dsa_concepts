// // // //Write a program in C++ to convert each element of an array of temperatures in Celsius to Fahrenheit. Create an array of 10 temperatures in Celsius. Define a function convertToFahrenheit that takes a single Celsius value and returns its Fahrenheit equivalent. Use a loop to pass each element of the array to the function and print the converted values.
#include <iostream>
using namespace std;
float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}
int main() {
    float celsiusTemps[10];
    cout << "Enter 10 temperatures in Celsius: ";
    for (int i = 0; i < 10; i++) {
        cin >> celsiusTemps[i];
    }
    cout << "Temperatures in Fahrenheit:\n";
    for (int i = 0; i < 10; i++) {
        float fahrenheit = convertToFahrenheit(celsiusTemps[i]);
        cout << celsiusTemps[i] << "°C = " << fahrenheit << "°F" << endl;
    }
    return 0;
}