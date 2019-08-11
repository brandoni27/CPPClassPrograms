//Brandon Washington
#include <iostream>
using namespace std;


double mpg(int a , int b){
    double miles,liter, gallon,mpg;
    liter = b;
    gallon = liter * 0.264179;
    mpg = a/gallon;
    cout << mpg << " mpg" << endl;

    return mpg;
}

int main(){
    int miles1, miles2, liter1, liter2, result1, result2;
    cout <<"How many miles?"<< endl;
    cin >> miles1;
    cout << "How many liters." << endl;
    cin >> liter1;
    
    cout <<"How many miles?"<< endl;
    cin >> miles2;
    cout << "How many liters." << endl;
    cin >> liter2;
    cout <<"How many miles?"<< endl;

    result1 = mpg(miles1, liter1);
    result2 = mpg(miles2, liter2);

    if(result1 > result2){
        cout << "Car #1 has " << result1 << "mpg. Car #1 Wins!" << endl;
    }else if(result1 < result2){
        cout << "Car #2 has " << result2 << "mpg. Car #2 Wins!" << endl;
    }else if(result1 == result2){
        cout << "Both cars have " << result1 <<"mpg. It's a tie." << endl;
    }
    return 0;
}
/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P51_MPGwithFunction.cpp -o P51_MPGwithFunction && "/Users/Brando/Desktop/C++Code/"P51_MPGwithFunction
How many miles?
380
How many liters.
14
How many miles?
400
How many liters.
17
How many miles?
102.744 mpg
89.0662 mpg
Car #1 has 102mpg. Car #1 Wins!
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P51_MPGwithFunction.cpp -o P51_MPGwithFunction && "/Users/Brando/Desktop/C++Code/"P51_MPGwithFunction
How many miles?
549
How many liters.
30
How many miles?
234
How many liters.
9
How many miles?
69.2712 mpg
98.4181 mpg
Car #2 has 98mpg. Car #2 Wins!
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P51_MPGwithFunction.cpp -o P51_MPGwithFunction && "/Users/Brando/Desktop/C++Code/"P51_MPGwithFunction
How many miles?
600
How many liters.
30
How many miles?
600
How many liters.
30
How many miles?
75.7062 mpg
75.7062 mpg
Both cars have 75mpg. It's a tie.
brandons-air:C++Code Brando$ 
 */
