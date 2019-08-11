//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int v1 = 5;
    int v2 = 10;
    int temp;

    cout << "Before swap: v1 = " << v1 << ", v2 = " << v2 << endl;

    temp = v1;
    v1 = v2;
    v2 = temp;

    cout << "After swap: v1 = "<< v1 <<", v2= " << v2 << endl;
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P55_SwapExample.cpp -o P55_SwapExample && "/Users/Brando/Desktop/C++Code/"P55_SwapExample
Before swap: v1 = 5, v2 = 10
After swap: v1 = 10, v2= 5
Brandons-MacBook-Air:C++Code Brando$  
*/