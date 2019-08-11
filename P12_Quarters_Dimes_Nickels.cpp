//Brandon Washington
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int quarters, dimes, nickels;
    float total;
    cout << "Please enter the number of quarters.: ";
    cin >> quarters;
    cout <<"Please enter the number of dimes: ";
    cin >> dimes;
    cout << "Please enter the number of nickels: ";
    cin >> nickels;
    total = (25 * quarters) + (10 * dimes) + (5 * nickels);
    cout << fixed << setprecision(2) << "Your total is: $" << total/100<< endl;
    return 0;
}
/*
Please enter the number of quarters.: 9
Please enter the number of dimes: 21
Please enter the number of nickels: 60
Your total is: $7.35
*/