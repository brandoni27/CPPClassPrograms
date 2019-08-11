//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int count;
    int R = 0, num;
    
    for (count = 0; count < 3; count++)
    {
        cout << "In FOR loop:" << endl;
        cout << "count = " << count << endl;
    }
    while (count<4){
        cout << "In While loop:" << endl;
        cout << "count = " << count << endl;
        count++;
    }
    do{
        cout << "In DO-WHILE loop: "<< endl;
        cout << "count = " << count << endl;
        count += 1;
        }while(count <3);
    while (R < 3)
    {
        cout << "Inside WHILE, r = " << R << endl;
        R += 1;
    }
    int Age = -10;
    while ((Age < 0) || (Age > 123) )
    {
        cout << "Please enter a valid age: ";
        cin >> Age;
    }
    while ( (Age > 0) && (Age < 123) )
    {
        cout << "Age is correct, enter invalid age to stop loop: ";
        cin >> Age;
    }
    while (true)
    {
        cout << "Please enter 1 to stop and 2 to repeat the loop: ";
        cin >> num;
        if (num ==1)
            break;
        else if(num ==2)
            continue;
        cout << "Does this ever show?\n";
    }
    return 0;

}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P19_2Loops.cpp -o P19_2Loops && "/Users/Brando/Desktop/C++Code/"P19_2Loops
In FOR loop:
count = 0
In FOR loop:
count = 1
In FOR loop:
count = 2
In While loop:
count = 3
In DO-WHILE loop: 
count = 4
Inside WHILE, r = 0
Inside WHILE, r = 1
Inside WHILE, r = 2
Please enter a valid age: 27
Age is correct, enter invalid age to stop loop: 27
Age is correct, enter invalid age to stop loop: -1
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 1 
*/