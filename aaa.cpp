#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsius_to_kelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;
}

double kelvin_to_celsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvin_to_fahrenheit(double kelvin) {
    return kelvin * 9/5 - 459.67;
}

int main() {
    cout << "Temperature Converter" << endl;
    cout << "=====================" << endl;

    double temperature;
    string unit;

    cout << "Enter the temperature value: ";
    cin >> temperature;
    cin.ignore(); // Clear the newline character from the input buffer

    cout << "Enter the unit of measurement (Celsius, Fahrenheit, Kelvin): ";
    getline(cin, unit);

    if (unit == "Celsius" || unit == "celsius") {
        double fahrenheit = celsius_to_fahrenheit(temperature);
        double kelvin = celsius_to_kelvin(temperature);
        cout << "=====================" << endl;
        cout << fixed << setprecision(2);
        cout << temperature << " Celsius is equivalent to:" << endl;
        cout << fahrenheit << " Fahrenheit" << endl;
        cout << temperature << " Celsius" << endl;
        cout << kelvin << " Kelvin" << endl;
    } 
    else if (unit == "Fahrenheit" || unit == "fahrenheit") {
        double celsius = fahrenheit_to_celsius(temperature);
        double kelvin = fahrenheit_to_kelvin(temperature);
        cout << "=====================" << endl;
        cout << fixed << setprecision(2);
        cout << temperature << " Fahrenheit is equivalent to:" << endl;
        cout << temperature << " Fahrenheit" << endl;
        cout << celsius << " Celsius" << endl;
        cout << kelvin << " Kelvin" << endl;
    } 
    else if (unit == "Kelvin" || unit == "kelvin") {
        double celsius = kelvin_to_celsius(temperature);
        double fahrenheit = kelvin_to_fahrenheit(temperature);
        cout << "=====================" << endl;
        cout << fixed << setprecision(2);
        cout << temperature << " Kelvin is equivalent to:" << endl;
        cout << fahrenheit << " Fahrenheit" << endl;
        cout << celsius << " Celsius" << endl;
        cout << temperature << " Kelvin" << endl;
    } 
    else {
        cout << "Invalid unit of measurement!" << endl;
        return 1;
    }

    return 0;
}
