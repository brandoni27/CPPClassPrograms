//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int number,lowest,highest;
    float average,sum,stop;
    cout << "How many numbers do you want?" << endl;
    cin >> stop;
    for(int x = 0; x < stop; x++) {
        cout << "Please enter an integer: ";
        cin >> number;
        sum = sum + number;
        if(x == 0){
            lowest = number;
        }
        else if (number < lowest){
            lowest = number;
        }
        if(number > highest){
            highest = number;
        }
        
    }
    average = sum/stop;
    cout <<  lowest << " is the lowest number." << endl;
    cout <<  highest << " is the highest number." << endl;
    cout << average << " is the average." << endl;
    cout << sum << " is the sum." << endl;
}
/*
How many numbers do you want?
4
Please enter an integer: 1
Please enter an integer: 2
Please enter an integer: 3
Please enter an integer: 9
1 is the lowest number.
9 is the highest number.
3.75 is the average.
15 is the sum.

How many numbers do you want?
9
Please enter an integer: 4
Please enter an integer: 6
Please enter an integer: 2
Please enter an integer: 9
Please enter an integer: 6
Please enter an integer: 8
Please enter an integer: 7
Please enter an integer: 2
Please enter an integer: 3
2 is the lowest number.
9 is the highest number.
5.22222 is the average.
47 is the sum.
*/