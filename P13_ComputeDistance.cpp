//Brandon Washington
#include<iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(){
    float accel,time,distance;
    cout <<"Please enter the accelaration.";
    cin >> accel;
    cout <<"Please enter the time";
    cin >> time;
    distance = (accel*pow(time,2))/2;
    printf("distance =%f\n",distance);
    cout << std::setprecision(2) << "distance =" << distance;
    return 0;
}
/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P13_ComputeDistance.cpp -o P13_ComputeDistance && "/Users/Brando/Desktop/C++Code/"PtancemputeDis 
Please enter the accelaration.50
Please enter the time3
distance =225.000000
distance =2.2e+02 
*/