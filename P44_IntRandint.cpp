//Brandon Washington
#include <iostream>
using namespace std;

int randint(int min, int max){
    srand(time(0));
    int r = (rand() % max) + min;
    return r;
}
int main(){
    cout << randint(1,9) << endl;
    cout << randint(1,99) << endl;
    cout << randint(1,999) << endl;
    cout << randint(1,99999) << endl;
    cout << randint(1,999999) << endl;
    cout << randint(1,9999999) << endl;
}

/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P44_IntRandint.cpp -o P44_IntRandint && "/Users/Brando/Desktop/C++Code/"P44_IntRandint
1
46
568
95059
887680
9886942
brandons-air:C++Code Brando$ 
*/