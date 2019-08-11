//Brandon Washington
#include<iostream>
using namespace std;

float larger(float num1, float num2){
    float answer = 0;
    if(num1 < num2){
        answer = num2;
    }else if (num1 > num2){
        answer = num1;
    }else{
        cout << "Undefined." <<endl;
    }    
    return answer;
}
int main(){
    cout << larger(437.43,2345.23) << endl;
    cout << larger(534.34,212.53) << endl;
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P36_FloatLarger.cpp -o P36_FloatLarger && "/Users/Brando/Desktop/C++Code/"P36_FloatLarger
2345.23
534.34
Brandons-MacBook-Air:C++Code Brando$ 
*/