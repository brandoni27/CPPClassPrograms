//Brandon Washington
#include<iostream>
using namespace std;

int main()
{
    double fahrenheit;
    double celsius;

    cout << "Enter the temperature in Fahrenheit." << endl;
    cin >> fahrenheit;
    // cout << "Enter temperature in Fahrenheit. " << endl;
    // cin >> fahrenheit;
    // celsius = ( 5 / 9) * (fahrenheit - 32);
    // cout << "Temperature in Celsius is " << celsius << endl;

    double conversionFactor = 0.555555;
    double tempFahrenheit = (fahrenheit - 32);

    cout << "fahrenheit - 32 = " << tempFahrenheit << endl;
    cout << "conversionFactor = " << conversionFactor << endl;
    celsius = conversionFactor * tempFahrenheit;
    cout << "Temperature in Celsius is " << celsius << endl;

    return 0;
}