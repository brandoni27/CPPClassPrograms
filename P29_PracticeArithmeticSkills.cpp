//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int practice,number1,number2,answer,again;
    srand (time(NULL));
    
    cout << "What would you like to practice? +(1),-(2),*(3) "<< endl;
    cin >> practice;
    do{
        number1 = rand() % 15 + 0;
        number2 = rand() % 15 + 0; 
        if(practice == 1){
            cout << "What is " << number1 << " + "<< number2 <<" ?";
            cin >> answer;
            if(answer == (number1 + number2)){
                cout << "Good job, how you like to try again? (Yes = 1/No = 0)"<< endl;
                cin >> again;
            }else if(answer != (number1 + number2)){
                cout << "Try again" << endl;
                again = 1;
            }
        }
        if(practice == 2){
            cout << "What is " << number1 << " - "<< number2 <<" ?";
            cin >> answer;
            if(answer == (number1 - number2)){
                cout << "Good job, how you like to try again? (Yes = 1/No = 0)"<< endl;
                cin >> again;
            }else if(answer != (number1 - number2)){
                cout << "Try again" << endl;
                again = 1;
            }
        }
        if(practice == 3){
            cout << "What is " << number1 << " * "<< number2 <<" ?";
            cin >> answer;
            if(answer == (number1 * number2)){
                cout << "Good job, how you like to try again? (Yes = 1/No = 0)"<< endl;
                cin >> again;
            }else if(answer != (number1 * number2)){
                cout << "Try again" << endl;
                again = 1;
            }
        }
    }while(again != 0);
    cout << "Thanks for playing!";
}
/* 
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P29_PracticeArithmeticSkills.cpp -o P29_PracticeArithmeticSkills && "/Users/Brando/Desktop/C++Code/"P29_PracticeArithmeticSkills
What would you like to practice? +(1),-(2),*(3) 
2
What is 5 - 11 ?-6
Good job, how you like to try again? (Yes = 1/No = 0)
1
What is 11 - 14 ?1
Try again
What is 5 - 14 ?-9
Good job, how you like to try again? (Yes = 1/No = 0)
0
Brandons-MacBook-Air:C++Code Brando$ 



What would you like to practice? +(1),-(2),*(3) 
1
What is 1 + 10 ?11
Good job, how you like to try again? (Yes = 1/No = 0)
1
What is 3 + 11 ?1
Try again
What is 13 + 0 ?13
Good job, how you like to try again? (Yes = 1/No = 0)
0



What would you like to practice? +(1),-(2),*(3) 
3
What is 5 * 4 ?20
Good job, how you like to try again? (Yes = 1/No = 0)
1
What is 4 * 4 ?2
Try again
What is 7 * 12 ?84
Good job, how you like to try again? (Yes = 1/No = 0)
0
*/