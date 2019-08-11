//Brandon Washington

#include <iostream>
using namespace std;

int randomReturn(){
    srand(time(NULL));
    int r = rand() % 23 + 11;
    return r;
}
void largest(float a, float b, float c){
    if(a > b && a > c){
        cout << a << " is the largest number of the set." << endl;
    }
    if(b > a && b > c){
        cout << b << " is the largest number of the set." << endl;
    }
    if(c > b && c > a){
        cout << c << " is the largest number of the set." << endl;
    }
}
int main()
{
    cout << randomReturn() << endl;
    largest(3,6,4);
    largest(12,6,9);
    largest(3,1,10);
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ MidtermTwoFunctions.cpp -o MidtermTwoFunctions && "/Users/Brando/Desktop/C++Code/"MidtermTwoFunctions
12
6 is the largest number of the set.
12 is the largest number of the set.
10 is the largest number of the set.
*/