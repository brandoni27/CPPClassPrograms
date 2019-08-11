//Brandon Washington
#include<iostream>
using namespace std;


int loneSum(int A, int B, int C){
    int answer = A + B + C;
    return answer;
}
int main(){
    int answer1, answer2, answer3;
    answer1 = loneSum(4,3,56);
    answer2 = loneSum(9,3,54);
    answer3 = loneSum(93,43,2);
    cout << answer1 << endl;
    cout << answer2 << endl;
    cout << answer3 << endl;
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P41_3ParametersReturnsInteger.cpp -o P41_3ParametersReturnsInteger && "/Users/Brando/Desktop/C++Code/"P41_3ParametersReturnsInteger
63
66
138
Brandons-MacBook-Air:C++Code Brando$ 
*/