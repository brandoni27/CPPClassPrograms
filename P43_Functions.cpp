//Brandon Washington
#include<iostream>
using namespace std;

double celsius(double fahrenheit){
    double celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

void show_results(double f_degrees, double c_degrees){
    cout << f_degrees << " fahrenheit is equal to " << c_degrees << " celsius." << endl;
}
int main(){
    using namespace std;
    double f_temperature, c_temperature;

    cout << "I will convert a Fahrenheit temperature"
         << " to Celsius. \n"
         << "Enter a temperature in Fahrenheit: ";
    cin >> f_temperature;

    c_temperature = celsius(f_temperature);

    show_results(f_temperature,c_temperature);
    return 0;
}

/*
I will convert a Fahrenheit temperature to Celsius. 
Enter a temperature in Fahrenheit: 103
103 fahrenheit is equal to 39.4444 celsius. 

I will convert a Fahrenheit temperature to Celsius. 
Enter a temperature in Fahrenheit: 78
78 fahrenheit is equal to 25.5556 celsius.
*/