//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int number,lowest,highest,setter = 0;
    
    do{
        cout << "Please enter an integer: ";
        cin >> number;
        if(number == -999){
            break;
        }
        if(setter == 0){
            lowest = number;
        }
        else if (number < lowest){
            lowest = number;
        }
        if(number > highest){
            highest = number;
        }
        
        setter++;
    }while(number != -999);
    cout <<  lowest << " is the lowest number." << endl;
    cout <<  highest << " is the highest number." << endl;
    

}
/*
Please enter an integer: 6
Please enter an integer: 3
Please enter an integer: 8
Please enter an integer: 9
Please enter an integer: 5
Please enter an integer: 3
Please enter an integer: 7
Please enter an integer: 10
Please enter an integer: 27
Please enter an integer: 1
Please enter an integer: -99
Please enter an integer: -999
-99 is the lowest number.
27 is the highest number. 
*/