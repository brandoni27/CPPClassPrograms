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