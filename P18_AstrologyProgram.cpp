//Brandon Washington
#include <iostream>
using namespace std;

int main(){
    int day,month;
    cout << "What day were you born?" << endl;
    cin >> day;
    cout << "What month were you born?" << endl;
    cin >> month;
    if((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        cout << "You are a Aries.";
        cout << "You are a Fire sign. Compatible with: Aries, Leo, Sagittarius.";
    }
    if((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        cout << "You are a Taurus.";
        cout << "You are an Earth sign. Compatible with: Taurus, Virgo, Capricorn.";
    }
    if((month == 5 && day >= 21) || (month == 6 && day <= 21)){
        cout << "You are a Gemini.";
        cout << "You are an Air sign. Compatible with: Gemini, Libra, Aquarius.";
    }
    if((month == 6 && day >= 22) || (month == 7 && day <= 22)){
        cout << "You are a Cancer.";
        cout << "You are an Water sign. Compatible with: Cancer, Scorpio, Pisces.";
    }
    if((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        cout << "You are a Leo.";
        cout << "You are a Fire sign. Compatible with: Aries, Leo, Sagittarius.";
    }
    if((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        cout << "You are a Virgo.";
        cout << "You are an Earth sign. Compatible with: Taurus, Virgo, Capricorn.";
    }
    if((month == 9 && day >= 23) || (month == 10 && day <= 23)){
        cout << "You are a Libra.";
        cout << "You are an Air sign. Compatible with: Gemini, Libra, Aquarius.";
    }
    if((month == 10 && day >= 24) || (month == 11 && day < 21)){
        cout << "You are a Scorpio.";
        cout << "You are an Water sign. Compatible with: Cancer, Scorpio, Pisces.";
    }
    if((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        cout << "You are a Sagittarius.";
        cout << "You are a Fire sign. Compatible with: Aries, Leo, Sagittarius.";
    }
    if((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        cout << "You are a Capricorn.";
        cout << "You are an Earth sign. Compatible with: Taurus, Virgo, Capricorn.";
    }
    if((month == 1 && day >= 20) || (month == 2 && day <= 18)){
        cout << "You are a Aquarius.";
        cout << "You are an Air sign. Compatible with: Gemini, Libra, Aquarius.";
    }
    if((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        cout << "You are a Pisces.";
        cout << "You are an Water sign. Compatible with: Cancer, Scorpio, Pisces.";
    }
    return 0;
}

/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P18_AstrologyProgram.cpp -o P18_AstrologyProgram && "/Users/Brando/Desktop/C++Code/"P18_AstrologyProgram
What day were you born?
27
What month were you born?
10
You are a Scorpio.You are an Water sign. Compatible with: Cancer, Scorpio, Pisces.
*/