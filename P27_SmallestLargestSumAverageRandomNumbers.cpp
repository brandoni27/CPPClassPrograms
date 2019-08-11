//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int number,lowest,highest,random;
    float average,sum,stop;
    srand (time(NULL));
    stop = rand() % 15 + 10;
    
    for(int x = 0; x < stop; x++) {
        random = rand() % 50 + 20;
        number = random;
        sum = sum + number;
        if(x == 0){
            lowest = number;
        }
        else if (number < lowest){
            lowest = number;
        }
        if(number > highest){
            highest = number;
        }
        cout << random << endl;
    }
    average = sum/stop;
    cout << "There are " << stop << " random numbers." << endl;
    cout <<  lowest << " is the lowest number." << endl;
    cout <<  highest << " is the highest number." << endl;
    cout << average << " is the average." << endl;
    cout << sum << " is the sum." << endl;
}
/*
45
37
33
44
39
35
58
48
51
43
37
64
There are 12 random numbers.
33 is the lowest number.
64 is the highest number.
44.5 is the average.
534 is the sum. 

33
43
58
53
35
44
28
51
36
30
33
32
21
59
37
There are 15 random numbers.
21 is the lowest number.
59 is the highest number.
39.5333 is the average.
593 is the sum.
*/