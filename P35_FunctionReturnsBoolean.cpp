// Brandon Washington
#include <iostream>
using namespace std;

bool isEven(int number){
    if(number % 2 == 0){
        return true;
    }
    if(number % 2 == 1){
        return false;
    }
    return 2;
}
int main(){
    cout << isEven(4) << endl;
    cout << isEven(5) << endl;
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P35_FunctionReturnsBoolean.cpp -o P35_FunctionReturnsBoolean && "/Users/Brando/Desktop/C++Code/"P35_FunctionReturnsBoolean
1
0
Brandons-MacBook-Air:C++Code Brando$  
*/