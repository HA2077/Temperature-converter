#include <iostream>
using namespace std;
float temperature;

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

void Handlerrors(){
    while(!cin){
                cin.clear();
                cin.ignore(20, '\n');
                cout << "Enter a valid number!!" << endl;
                cout << "Enter the temperature: ";     cin >> temperature;
            }
}

int main(){
    cout << "Temperature Converter" << endl;
    while (true){
    cout << "1. Celsius to Fahrenheit\n2. Celsius to Kelvin\n3. Fahrenheit to Celsius";
    cout << "\n4. Fahrenheit to Kelvin\n5. Kelvin to Celsius\n6. Kelvin to Fahrenheit" << endl;  cout << endl; 
    int choice;    char YorN;
    cout << "Enter your choice (1-6): ";    cin >> choice;
    switch (choice){
        case 1:
            cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
            Handlerrors();
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
            break;
        case 2:
            cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
            Handlerrors();
            cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << endl;
            break;   
        case 3:
            cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
            Handlerrors();
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
            break;
        case 4:
            cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
            Handlerrors();
            cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << endl;
            break;
        case 5:
            cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
            Handlerrors();
            cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << endl;
            break;
        case 6: 
            cout << "Enter the temperature: ";       cin >> temperature;    cout << endl;
            Handlerrors();
            cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << endl;
            break;
        default: 
            cout << "Enter a valid number!" << endl;
    }
    cout << "Convert another? (Y for yes and N for No): ";       cin >> YorN;
    if (YorN == 'Y' || YorN == 'y')
        continue;
    else if (YorN == 'N' || YorN == 'n'){
        cout << "--- Closing the program ---" << endl;
        return 0;
    }
    while (YorN != 'Y' || YorN != 'y' || YorN != 'N' || YorN != 'n'){
        cin.clear();
        cin.ignore(20, '\n');
        cout << "Enter Y or N!!" << endl;
        cout << "Convert another? (Y for yes and N for No): ";       cin >> YorN;
    }
}
}