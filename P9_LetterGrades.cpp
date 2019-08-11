//Brandon Washington
#include<iostream>
using namespace std;

int main(){
    int grade;
    cout << "Please enter your percentage score.";
    cin >> grade;
    if(grade >= 90){
        cout << "You have an \"A\"" << endl;
    }
    else if(grade >= 80 && grade < 90){
        cout << "You have a \"B\"" << endl;
    }
    else if(grade >= 70 && grade < 80){
        cout << "You have a \"C\"" << endl;
    }
    else if(grade >= 60 && grade < 70){
        cout << "You have a \"D\"" << endl;
    }
    else if(grade < 60){
        cout << "You have a \"F\"" << endl;
    }
    return 0;
}

/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P9_LetterGrades.cpp -o P9_LetterGrades && "/Users/Brando/Desktop/C++Code/"P9_LetterGrades
Please enter your percentage score.56
You have a "F"
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P9_LetterGrades.cpp -o P9_LetterGrades && "/Users/Brando/Desktop/C++Code/"P9_LetterGrades
Please enter your percentage score.65
You have a "D"
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P9_LetterGrades.cpp -o P9_LetterGrades && "/Users/Brando/Desktop/C++Code/"P9_LetterGrades
Please enter your percentage score.73
You have a "C"
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P9_LetterGrades.cpp -o P9_LetterGrades && "/Users/Brando/Desktop/C++Code/"P9_LetterGrades
Please enter your percentage score.88
You have a "B"
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P9_LetterGrades.cpp -o P9_LetterGrades && "/Users/Brando/Desktop/C++Code/"P9_LetterGrades
Please enter your percentage score.94
You have an "A"
*/