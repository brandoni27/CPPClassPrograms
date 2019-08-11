//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int random, guess,i=0;
    srand (time(NULL));
    random = rand() % 100 + 1;
    
    do{
        cout << "Please enter a guess between 0 - 100: " << endl; 
        cin >> guess;
        if(guess > random){
            cout << "No, it's lower than that." << endl;
        }
        if(guess < random){
            cout << "No, it's higher than that." << endl;
        }
        i++;
    }while(guess != random);
    cout << "You got it, it only took you " << i << " attempts.";
}
/*
Please enter a guess between 0 - 100: 
3
No, it's higher than that.
Please enter a guess between 0 - 100: 
6
No, it's higher than that.
Please enter a guess between 0 - 100: 
50
No, it's higher than that.
Please enter a guess between 0 - 100: 
75
No, it's higher than that.
Please enter a guess between 0 - 100: 
80
You got it, it only took you 5 attempts.
*/