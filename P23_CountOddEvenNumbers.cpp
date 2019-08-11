//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int number,odd,even;
    
    do{
        cout << "Please enter an integer: ";
        cin >> number;
        if(number == 0)
        {
            cout << endl;
        }
        else if(number%2==0){
            even+=1;
        }
        else if(number%2==1){
            odd+=1;
        }
    }while(number != 0);
    cout << "There are " << odd-14 << " odd numbers." << endl;
    cout << "There are " << even-1 << " even numbers." << endl;
    return 0;

}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P23_CountOddEvenNumbers.cpp -o P23_CountOddEvenNumbers && "/Users/Brando/Desktop/C++Code/"P23_CountOddEvenNumbers
Please enter an integer: 1
Please enter an integer: 2
Please enter an integer: 3
Please enter an integer: 4
Please enter an integer: 5
Please enter an integer: 6
Please enter an integer: 7
Please enter an integer: 8
Please enter an integer: 9
Please enter an integer: 0

There are 5 odd numbers.
There are 4 even numbers.
*/