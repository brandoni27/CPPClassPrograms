//Brandon Washington
#include<iostream>
using namespace std;

float average(float num1, float num2, float num3, float num4){
    float average = (num1 + num2 + num3 + num4)/4;
    return average;
}
int main(){
    cout << average(437.43,2345.23,234,5345) << endl;
    cout << average(534.34,212.53,74567,2346) << endl;
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P37_ReturnAverage.cpp -o P37_ReturnAverage && "/Users/Brando/Desktop/C++Code/"P37_ReturnAverage
2090.42
19415
Brandons-MacBook-Air:C++Code Brando$
*/