// Brandon Washington
#include<iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(){
    int age;
    char citizen, registered;
    cout <<"Are you a U.S. Citizen?";
    cin >> citizen;
    cout <<"How old are you?";
    cin >> age;
    cout <<"Are you registered to vote";
    cin >> registered;
    if(age < 18){
        cout << "Sorry, you are too young to vote." << endl;
    }
    if(citizen =='n'||citizen =='N')
    {
        cout << "Sorry, you are not a U.S. citizen." << endl;
    }
    if(registered == 'n'||registered == 'N')
    {
        cout << "Sorry, you are not registered to vote." << endl;
    }
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P7_Voting.cpp -o P7_Voting && "/Users/Brando/Desktop/C++Code/"P7_Voting
Are you a U.S. Citizen?n
How old are you?43
Are you registered to voten
Sorry, you are not a U.S. citizen.
Sorry, you are not registered to vote.
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P7_Voting.cpp -o P7_Voting && "/Users/Brando/Desktop/C++Code/"P7_Voting
Are you a U.S. Citizen?y
How old are you?5
Are you registered to votey
Sorry, you are too young to vote. */