//Brandon Washington
#include <iostream>
using namespace std;

int sumDouble(int v1, int v2){
    if(v1 == v2){
            int answer = (v1 + v2)*2;
            return answer;
    }
    int v3 = v1 + v2;
    return v3;
}
int main(){
    cout << sumDouble(2,2) << endl;
    cout << sumDouble(3,3) << endl;
    cout << sumDouble(4,6) << endl;
    cout << sumDouble(999,999) << endl;
    
}
/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P47_sumDouble.cpp -o P47_sumDouble && "/Users/Brando/Desktop/C++Code/"P47_sumDouble
8
12
10
3996 
*/