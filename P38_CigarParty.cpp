//Brandon Washington
#include<iostream>
using namespace std;

bool cigarParty(int cigars, bool  isWeekend){
    if(cigars <= 60 && cigars >= 40){
        return true;
    }
    if(isWeekend == true){
            if(cigars > 60 || cigars < 40){
                return true;
            }
    }
    return false;
}
int main(){
    cout << cigarParty(70,true) << endl;
    cout << cigarParty(50,false) << endl;
    cout << cigarParty(65,true) << endl;
    cout << cigarParty(30,false) << endl;
    cout << cigarParty(20,false) << endl;
    cout << cigarParty(80,false) << endl;
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P38_CigarParty.cpp -o P38_CigarParty && "/Users/Brando/Desktop/C++Code/"P38_CigarParty
1
1
1
0
0
0
Brandons-MacBook-Air:C++Code Brando$ 
*/