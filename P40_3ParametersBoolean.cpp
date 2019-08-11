//Brandon Washington
#include<iostream>
using namespace std;


bool posNeg(int A, int B, bool C){
    if(A < 0 && B > 0){
        cout << "First Condition.";
        return true;
    }else if(B < 0 && A > 0){
        cout << "Second Condition. ";
        return true;
    }else if(C == true){
        if(A < 0 && B < 0)
        cout << "Double Negative. ";
        return true;
    }
    cout << "Fail ";
    return false;
}
int main(){
    //First condition
    cout << posNeg(-2,4,false) << endl;
    cout << posNeg(-10,4,false) << endl;

    //Second condition
    cout << posNeg(6,-4,false) << endl;
    cout << posNeg(3,-6,false) << endl;

    //Third condition
    cout << posNeg(-5,-11,true) << endl;
    cout << posNeg(-2,-8,true) << endl;

    //Set of failure conditions
    cout << posNeg(1,1,false) << endl;
    cout << posNeg(2,2,false) << endl;
    cout << posNeg(3,7,false) << endl;//
    cout << posNeg(7,2,false) << endl;//
    cout << posNeg(9,9,false) << endl;
    cout << posNeg(3,8,false) << endl;//

    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P40_3ParametersBoolean.cpp -o P40_3ParametersBoolean && "/Users/Brando/Desktop/C++Code/"P40_3ParametersBoolean
First Condition.1
First Condition.1
Second Condition. 1
Second Condition. 1
Double Negative. 1
Double Negative. 1
Fail 0
Fail 0
Fail 0
Fail 0
Fail 0
Fail 0
*/