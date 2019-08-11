// Brandon Washington
#include<iostream>
using namespace std;


int main(){
    int feet, inches, totalInches;
    cout << "Please enter feet: " << endl;
    cin >> feet;
    cout << "Please enter inches: " << endl;
    cin >> inches;
    totalInches = (feet*12)+inches;
    cout << "You are "<< feet << "'" << inches <<"\""<<". That's "<< totalInches << " inches!!"<<endl;
    if(totalInches > 72){
        cout << "You are tall.";
    }
    if(totalInches > 60 && totalInches < 73){
        cout << "You are average.";
    }
    if(totalInches <60){
        cout <<"You are short.";
    }
}

/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P8_HeightMessage.cpp -o P8_HeightMessage && "/Users/Brando/Desktop/C++Code/"P8_HeightMessage
Please enter feet: 
6
Please enter inches: 
3
You are 6'3". That's 75 inches!!
You are tall.brandons-air:C++Code Brando$ 
*/