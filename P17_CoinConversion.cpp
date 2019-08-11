//Brandon Washington
#include <iostream>
using namespace std;

int main(){
    int q,d,n,p,total;
    cout << "Please enter the total: ";
    cin >> total;
    q = total / 25;
    
    
    
    if(q > 0){
        cout << "You have " << q << " quarters. " << q*25 <<" cents in total.";
        total -= q*25;
        
    }
    d = total / 10;
    if(d > 0){
        cout << "You have " << d << " dimes. " << d*10 <<" cents in total.";
        total -= d*10;
        
    }
    n = total / 5;
    if(n > 0){
        cout << "You have " << n << " nickels." << n*5 <<" cents in total.";
        total -= n*5;
        
    }
    p = total / 1;
    if(p > 0){
        cout << "You have " << p << " pennies." << p*1 <<" cents in total.";
    }
    return 0;
}
/*
Please enter the total: 119
You have 4 quarters. 100 cents in total.You have 1 dimes. 10 cents in total.You have 1 nickels.5 cents in total.You have 4 pennies.4 cents in total.
Please enter the total: 241
You have 9 quarters. 225 cents in total.You have 1 dimes. 10 cents in total.You have 1 nickels.5 cents in total.You have 1 pennies.1 cents in total.
*/