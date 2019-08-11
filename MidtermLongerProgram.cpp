//Brandon Washington

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a,b,c,repeat;
    do{
    
    cout << "Enter the length of the 3 sides." << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b && b == c){
        cout << "The triangle is an Equilateral." << endl;
    }
    else if(pow(a,2) + pow(b,2) == pow(c,2)){
        cout << "The triangle is a Right Triangle." << endl;
    }
    else if(a == b && b != c){
        cout << "The triangle is Isosceles." << endl;
    }else if(b == c && c != a){
        cout << "The triangle is Isosceles." << endl;
    }else if(c == a && a != b){
        cout << "The triangle is Isosceles." << endl;
    }else{
        cout << "The triangle isn't special." << endl;
    }
    cout << "Would you like to repeat? (Yes == 1, No == 0)" << endl;
    cin >> repeat;
    }while(repeat != 0);
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ MidtermLongerProgram.cpp -o MidtermLongerProgram && "/Users/Brando/Desktop/C++Code/"MidtermLongerProgram
Enter the length of the 3 sides.
7
7
7
The triangle is an Equilateral.
Would you like to repeat? (Yes == 1, No == 0)
1
Enter the length of the 3 sides.
3
4
5
The triangle is a Right Triangle.
Would you like to repeat? (Yes == 1, No == 0)
1
Enter the length of the 3 sides.
8
8
3
The triangle is Isosceles.
Would you like to repeat? (Yes == 1, No == 0)
1
Enter the length of the 3 sides.
1  
8
3
The triangle isn't special.
Would you like to repeat? (Yes == 1, No == 0)
0
Brandons-MacBook-Air:C++Code Brando$  
*/