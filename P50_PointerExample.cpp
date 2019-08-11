//Brandon Washington
#include <iostream>
using namespace std;

void change(int *A);


int main(){
    int A = 0;
    cout << " A = " << A << endl;
    cout << "&A = " << &A << endl;
    change (&A);
    cout << "A = " << A << endl;
}
void change(int *A)
{
    *A = 5;
}
/*

brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P50_PointerExample.cpp -o P50_PointerExample && "/Users/Brando/Desktop/C++Code/"P50_PointerExample
 A = 0
&A = 0x7ffee8e9590c
A = 5

*/