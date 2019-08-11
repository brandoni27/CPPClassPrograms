//Brandon Washington
#include <iostream>
using namespace std;

int main(){
    char p1,p2;
    cout << "Player 1, pick Rock(r), Paper(p), or Scissors(s).";
    cin >> p1;
    cout << "Player 2, pick Rock(r), Paper(p), or Scissors(s).";
    cin >> p2;
    if(p1 == 'r' && p2 == 'r'){
        cout << "The game is a tie!";
    }else if(p1 == 'r' && p2 =='s'){
        cout << "Player 1 wins!!!";
    }else if(p1 == 'r' && p2 =='p'){
        cout << "Player 2 wins!!!";
    }
    if(p1 == 's' && p2 =='r'){
        cout << "Player 2 wins!!!";
    }else if(p1 == 's' && p2 =='s'){
        cout << "The game is a tie!";
    }else if(p1 == 's' && p2 =='p'){
        cout << "Player 1 wins!!!";
    }
    if(p1 == 'p' && p2 =='p'){
        cout << "The game is a tie!";
    }else if(p1 == 'p' && p2 =='s'){
        cout << "Player 2 wins!!!";
    }else if(p1 == 'p' && p2 =='r'){
        cout << "Player 1 wins!!!";
    }
    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P16_RockPaperScissors.cpp -o P16_RockPaperScissors && "/Users/Brando/Desktop/C++Code/"P16_RockPaperScissors
Player 1, pick Rock(r), Paper(p), or Scissors(s).r
Player 2, pick Rock(r), Paper(p), or Scissors(s).s
Player 1 wins!!!Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P16_RockPaperScissors.cpp -o P16_RockPaperScissors && "/Users/Brando/Desktop/C++Code/"P16_RockPaperScissors
Player 1, pick Rock(r), Paper(p), or Scissors(s).s
Player 2, pick Rock(r), Paper(p), or Scissors(s).p
Player 1 wins!!!Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P16_RockPaperScissors.cpp -o P16_RockPaperScissors && "/Users/Brando/Desktop/C++Code/"P16_RockPaperScissors
Player 1, pick Rock(r), Paper(p), or Scissors(s).p
Player 2, pick Rock(r), Paper(p), or Scissors(s).r
Player 1 wins!!!Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P16_RockPaperScissors.cpp -o P16_RockPaperScissors && "/Users/Brando/Desktop/C++Code/"P16_RockPaperScissors
Player 1, pick Rock(r), Paper(p), or Scissors(s).r
Player 2, pick Rock(r), Paper(p), or Scissors(s).p
Player 2 wins!!!Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P16_RockPaperScissors.cpp -o P16_RockPaperScissors && "/Users/Brando/Desktop/C++Code/"P16_RockPaperScissors
Player 1, pick Rock(r), Paper(p), or Scissors(s).p
Player 2, pick Rock(r), Paper(p), or Scissors(s).s
Player 2 wins!!!Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P16_RockPaperScissors.cpp -o P16_RockPaperScissors && "/Users/Brando/Desktop/C++Code/"P16_RockPaperScissors
Player 1, pick Rock(r), Paper(p), or Scissors(s).s
Player 2, pick Rock(r), Paper(p), or Scissors(s).r
Player 2 wins!!!Brandons-MacBook-Air:C++Code Brando$ 
Player 1, pick Rock(r), Paper(p), or Scissors(s).r
Player 2, pick Rock(r), Paper(p), or Scissors(s).r
The game is a tie!Brandons-MacBook-Air:C++Code Brando$ 
*/