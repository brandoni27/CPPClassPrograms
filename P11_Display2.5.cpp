//Brandon Washington
#include <iostream>
#include <string>
using namespace std;

int main(){
    string middle_name, pet_name, alter_ego_name;
    cout << "Enter your middle name and the name of your pet. \n";
    cin >> middle_name;
    cin >> pet_name;
    alter_ego_name = pet_name + " " + middle_name;
    cout << "The name of your alter ego is ";
    cout << alter_ego_name << "."<< endl;
    return 0;
}

/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P11_Display2.5.cpp -o P11_Display2.5 && "/Users/Brando/Desktop/C++Code/"P11_Display2.5
Enter your middle name and the name of your pet. 
Charles
Dusty
The name of your alter ego is Dusty Charles.
Brandons-MacBook-Air:C++Code Brando$  
*/