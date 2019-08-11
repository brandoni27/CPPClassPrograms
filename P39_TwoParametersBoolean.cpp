//Brandon Washington
#include<iostream>
using namespace std;


bool love6(int A, int B){
    if(A + B == 6 || A - B == 6){
        cout << "First ";
        return true;
    }else if(A == 6 || B == 6){
        cout << "Second ";
        return true;
    }else if(B - A == 6){
        cout << "Third ";
        return true;
    }
    return false;
}
int main(){
    //First condition
    cout << love6(2,4) << endl;
    cout << love6(10,4) << endl;

    //Second condition
    cout << love6(6,4) << endl;
    cout << love6(3,6) << endl;

    //Third condition
    cout << love6(5,11) << endl;
    cout << love6(2,8) << endl;

    //Set of failure conditions
    cout << love6(1,1) << endl;
    cout << love6(2,2) << endl;
    cout << love6(3,7) << endl;//
    cout << love6(7,2) << endl;//
    cout << love6(9,9) << endl;
    cout << love6(3,8) << endl;//

    return 0;
}

/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P39_TwoParametersBoolean.cpp -o P39_TwoParametersBoolean && "/Users/Brando/Desktop/C++Code/"P39_TwoParametersBoolean
First 1
First 1
Second 1
Second 1
Third 1
Third 1
0
0
0
0
0
0 
*/