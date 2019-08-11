//Brandon Washington
#include <iostream>
using namespace std;

bool monkeyTrouble(bool Asmile, bool Bsmile){
    if(Asmile == true && Bsmile == false){
            return false;
    }else if(Asmile == false && Bsmile == true){
            return false;
    }else if(Asmile == true && Bsmile == true){
            return true;
    }else if(Asmile == false && Bsmile == false){
            return true;
    };
    return 2;
}
int main(){
    cout << monkeyTrouble(false,false) << endl;
    cout << monkeyTrouble(true,false) << endl;
    cout << monkeyTrouble(false,true) << endl;
    cout << monkeyTrouble(true,true) << endl;
    
}

/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P46_monkeyTrouble.cpp -o P46_monkeyTrouble && "/Users/Brando/Desktop/C++Code/"P46_monkeyTrouble
1
0
0
1
*/