//Brandon Washington

#include <iostream>  
using namespace std;  
int main(){  
    int x1 = 0, x2 = 1, x3, i, count;    
    cout << "Enter the number of elements: ";    
    cin >> count;    
    cout << x1 << " " << x2 << " ";   
    for(i = 2; i<count; ++i)    
    {    
        x3 = x1+ x2;    
        cout << x3 << " ";    
        x1 = x2;    
        x2 = x3;    
    }    
    return 0;  
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P49_Fibonaci.cpp -o P49_Fibonaci && "/Users/Brando/Desktop/C++Code/"P49_Fibonaci
Enter the number of elements: 27
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393  
*/