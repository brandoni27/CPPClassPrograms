//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int count = 150, total;
    
    while(count < 250)
    {
        count++;
        total = total + count;
    }
    cout << "The sum of numbers 150 - 250 is " << total << endl;
    cout << "The average of numbers 150 - 250 is " << total/100 << endl;
    return 0;

}
/*
The sum of numbers 150 - 250 is 20050
The average of numbers 150 - 250 is 200
*/