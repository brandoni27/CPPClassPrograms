//Brandon Washington
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int x,i;
    cout << "How many numbers would you like to enter? ";
    cin >> x;
    int numbers[x];

    for (int i=0; i != x; i++)
    {
        cout << "Enter number " << i+1 << endl;
        cin >> numbers[i];
    }
    for (i = 0; i <= x; i++)
    {
        cout << numbers[i] << endl;
        
    }

    return 0;
}

/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P53_ArrayInputOutput.cpp -o P53_ArrayInputOutput && "/Users/Brando/Desktop/C++Code/"P53_ArrayInputOutput
How many numbers would you like to enter? 5
Enter number 1
2
Enter number 2
4
Enter number 3
6
Enter number 4
8
Enter number 5
10
2
4
6
8
10
*/