//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    float j1,j2,j3,j4,total,average;
    int x;

    while(x == 0) {
        cout << "First Judge's score: "<< endl;
        cin >> j1;
        cout << "Second Judge's score: "<< endl;
        cin >> j2;
        cout << "Third Judge's score: "<< endl;
        cin >> j3;
        cout << "Fourth Judge's score: "<< endl;
        cin >> j4;
        if(j1 < 0 || j1 > 10){
            cout << "First Judge's score must be between 0 - 10: "<< endl;
            cin >> j1;
        }
        if(j2 < 0 || j2 > 10){
            cout << "Second Judge's score must be between 0 - 10: "<< endl;
            cin >> j2;
        }
        if(j3 < 0 || j3 > 10){
            cout << "Third Judge's score must be between 0 - 10: "<< endl;
            cin >> j3;
        }
        if(j4 < 0 || j4 > 10){
            cout << "Fourth Judge's score must be between 0 - 10: "<< endl;
            cin >> j4;
        }
        total = j1 + j2 + j3 + j4;
        average = total / 4;
        x++;
        
    }
        
        cout << "The total is: " << total << endl;
        cout << "The average is: "<< average << endl;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P28_GymnasticsScore.cpp -o P28_GymnasticsScore && "/Users/Brando/Desktop/C++Code/"P28_GymnasticsScore
First Judge's score: 
4
Second Judge's score: 
6
Third Judge's score: 
7
Fourth Judge's score: 
5
The total is: 22
The average is: 5.5 
*/
