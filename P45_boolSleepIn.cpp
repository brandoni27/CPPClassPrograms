//Brandon Washington
#include <iostream>
using namespace std;

bool sleepIn(bool weekday, bool vacation){
    if(weekday == true && vacation == false){
            return false;
    }else if(weekday == false && vacation == true){
            return true;
    }else if(weekday == true && vacation == true){
            return true;
    }else if(weekday == false && vacation == false){
            return true;
    };
    return 2;
}
int main(){
    cout << sleepIn(false,false) << endl;
    cout << sleepIn(true,false) << endl;
    cout << sleepIn(false,true) << endl;
    cout << sleepIn(true,true) << endl;
    
}

/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P45_boolSleepIn.cpp -o P45_boolSleepIn && "/Users/Brando/Desktop/C++Code/"P45_boolSleepIn
1
0
1
1
*/