//Brandon Washington
#include<iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(){
    int number;
    srand(time(NULL));
    number = rand() % 25 + 10; 
    
    cout <<"Generating a random number 10 - 25: "<<number << endl;
    if (number % 2 == 0)
    {
        cout << "The number " << number << "is even.";
    }else if(number % 2 == 1)
    {
        cout << "The number " << number << " is odd.";
    }
    return 0;
}

/* 
"/Users/Brando/Desktop/C++Code/"P14_RandomNumberOddOrEven
Generating a random number 10 - 25: 12
The number 12is even.Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P14_RandomNumberOddOrEven.cpp -o P14_Rand"/Users/Brando/Desktop/C++Code/"P14_RandomNumberOddOrEven
Generating a random number 10 - 25: 19
The number 19 is odd.Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P14_RandomNumberOddOrEven.cpp -o P14_Rand"/Users/Brando/Desktop/C++Code/"P14_RandomNumberOddOrEven
Generating a random number 10 - 25: 22
The number 22is even.Brandons-MacBook-Air:C++Code Brando$ 
"/Users/Brando/Desktop/C++Code/"P14_RandomNumberOddOrEven
Generating a random number 10 - 25: 10
The number 10is even.Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P14_RandomNumberOddOrEven.cpp -o P14_Rand"/Users/Brando/Desktop/C++Code/"P14_RandomNumberOddOrEven
Generating a random number 10 - 25: 23
The number 23 is odd.Brandons-MacBook-Air:C++Code
*/