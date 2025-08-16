#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius){
    float fahrenheit = ((celsius * 9.0) / 5.0) + 32.0;
    return fahrenheit;
}

float celsiusToKelvin(float celsius){
    float kelvin = celsius + 273.15;
    return kelvin;
}

float fahrenheitToCelsius(float fahrenheit){
    float celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;
    return celsius;
}

float fahrenheitToKelvin(float fahrenheit){
    float kelvin = ((fahrenheit + 459.67) * 5.0) / 9.0;
    return kelvin;
}

float kelvinToCelsius(float kelvin){
    float celsius = kelvin - 273.15;
    return celsius;
}

float kelvinToFahrenheit(float kelvin){
    float fahrenheit = ((kelvin * 9.0) / 5.0) - 459.67;
    return fahrenheit;
}

int main(){
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit\n2. Celsius to Kelvin\n3. Fahrenheit to Celsius";
    cout << "\n4. Fahrenheit to Kelvin\n5. Kelvin to Celsius\n6. Kelvin to Fahrenheit" << endl;  cout << endl; 
    int choice;         float temperature; 
    cout << "Enter your choice (1-6): ";    cin >> choice;
    cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
    switch (choice){
        case 1:
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
            break;
        case 2:
            cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << endl;
            break;   
        case 3:
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
            break;
        case 4:
            cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << endl;
            break;
        case 5:
            cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << endl;
            break;
        case 6: 
            cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << endl;
            break;
        default: 
            cout << "Enter a valid number!" << endl;
    }
    return 0;
}