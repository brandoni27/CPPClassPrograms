//Brandon Washington
#include <iostream>
#include <random>
using namespace std;

int randint(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(3, 7);
    int r = dis(gen);
    return r;
}

void showArray ( int *a, int size ){
    int i = 0;
    do{
      a[i] = randint();
      cout << a[i] << " ";
      i++;
    }while(i!=size);
    cout << endl;
}

void showReverse (int *a, int size) {
    cout << "Shows array in reverse" << endl;
    do{
      cout << a[size-1] << " ";
      size--;
    }while(size > 0);
    cout << endl;
}

int lowest ( int a[ ], int size ){
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
          min = a[i];
        }   
    }
    return min;
}   

int highest ( int a[ ], int size ){
    int max = a[0]; 
    int i= 0;
    for (int i = 0; i < size; i++)
    {
      if (a[i] > max)
        {
          max = a[i];
        }
    }
    return max;
}

int sumArray ( int a[ ], int size ){
    int i = 0;
    int sum = 0;
    do{
      sum += a[i];
      i++;
    }while(i!=25);
    //cout << sum << " is the sum." << endl;
    return sum;
}

float averageVal ( int a[ ], int size ){
    int sum = sumArray(a,size);
    float average = sum/size;
    return average;
} 

int count5 ( int a[ ], int size ){
    int fiveCount=0, i=0;
    for (i = 0; i < size; i++)
    {
        if(a[i] == 5){
            fiveCount += 1;
        }  
    }return fiveCount;
}

int firstMinusLast (int a[ ], int size ){
    int first = a[0];
    int last = a[size-1];
    int answer = first - last;
    return answer;
}

void showBeforeIndex( int a [ ], int size, int index){
    int o = 0;
    do{
        cout << a[o] << " ";
        o++;
    }while(o < index);
        cout << " are the numbers before the index." << endl;
}

void done(){
    cout << "I am now done with CSS45! :)" << endl;
}
int main(){
    int theArray[25];
    
    showArray(theArray,25);
    showReverse(theArray,25);
    cout << "Lowest in array: " << lowest(theArray,25) << " " << endl;
    cout << "Highest in array: " << highest(theArray,25) << " " << endl; 
    cout << "The sum of the array is: " << sumArray(theArray,25) << " " << endl;
    cout << averageVal(theArray,25) << " is the average." << endl;
    cout << "There are " << count5(theArray,25) << " number 5s." << endl;
    cout << "The first element minus the last element is: " << firstMinusLast(theArray,25) << endl;
    showBeforeIndex(theArray, 24, 14);
    done();
    return 0;
}

/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ FinalExam.cpp -o FinalExam && "/Users/Brando/Desktop/C++Code/"FinalExam
3 4 6 5 7 3 4 5 7 3 3 5 3 5 5 4 7 4 7 6 6 7 5 4 7 
Shows array in reverse
7 4 5 7 6 6 7 4 7 4 5 5 3 5 3 3 7 5 4 3 7 5 6 4 3 
Lowest in array: 3 
Highest in array: 7 
The sum of the array is: 125 
5 is the average.
There are 6 number 5s.
The first element minus the last element is: -4
3 4 6 5  are the numbers before the index.
I am now done with CSS45! :)
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ FinalExam.cpp -o FinalExam && "/Users/Brando/Desktop/C++Code/"FinalExam
5 6 5 6 6 7 3 7 6 6 5 5 6 7 6 3 3 6 5 7 3 3 7 7 6 
Shows array in reverse
6 7 7 3 3 7 5 6 3 3 6 7 6 5 5 6 6 7 3 7 6 6 5 6 5 
Lowest in array: 3 
Highest in array: 7 
The sum of the array is: 136 
5 is the average.
There are 5 number 5s.
The first element minus the last element is: -1
5 6 5 6 6 7 3 7 6 6 5 5 6 7  are the numbers before the index.
I am now done with CSS45! :)
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ FinalExam.cpp -o FinalExam && "/Users/Brando/Desktop/C++Code/"FinalExam
7 6 6 3 4 6 4 7 3 7 5 4 7 3 7 7 4 7 7 3 4 6 3 3 5 
Shows array in reverse
5 3 3 6 4 3 7 7 4 7 7 3 7 4 5 7 3 7 4 6 4 3 6 6 7 
Lowest in array: 3 
Highest in array: 7 
The sum of the array is: 128 
5 is the average.
There are 2 number 5s.
The first element minus the last element is: 2
7 6 6 3 4 6 4 7 3 7 5 4 7 3  are the numbers before the index.
I am now done with CSS45! :)
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ FinalExam.cpp -o FinalExam && "/Users/Brando/Desktop/C++Code/"FinalExam
4 3 3 7 3 6 5 3 4 7 6 3 6 3 5 6 4 5 3 7 4 5 5 3 4 
Shows array in reverse
4 3 5 5 4 7 3 5 4 6 5 3 6 3 6 7 4 3 5 6 3 7 3 3 4 
Lowest in array: 3 
Highest in array: 7 
The sum of the array is: 114 
4 is the average.
There are 5 number 5s.
The first element minus the last element is: 0
4 3 3 7 3 6 5 3 4 7 6 3 6 3  are the numbers before the index.
I am now done with CSS45! :) 
*/