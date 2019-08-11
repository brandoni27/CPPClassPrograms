//Brandon Washington
#include<iostream>
using namespace std;


bool isPrime(int number){
    bool answer = true;
    for(int x = 2; x < number / 2; x++) {
       if(number % x == 0) {
          answer = false;
          if(answer == false){
            cout << "The number is not prime. " << number << endl;
          }
          break;
       }
    }
    if(answer == true){
        cout << "The number is prime. " << number << endl;
    }
    return answer;
    
}
int main(){
    isPrime(20);
    isPrime(9);
    isPrime(7);
    isPrime(5);
    isPrime(10);
    isPrime(11);
    return 0;
}
/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P42_PrimeNumberDetector.cpp -o P42_PrimeNumberDetector && "/Users/Brando/Desktop/C++Code/"P42_PrimeNumberDetector
The number is not prime. 20
The number is not prime. 9
The number is prime. 7
The number is prime. 5
The number is not prime. 10
The number is prime. 11
brandons-air:C++Code Brando$  
*/