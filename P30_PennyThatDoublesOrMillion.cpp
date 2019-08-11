//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    double amount = 1,x = 1;
    int million = 1000000;
    do{
        amount *= 2;
        cout << amount << " day " << x << endl;
        x++;
    }while(x<=30);
    if (million < amount){
        cout << "The second choice is better." << endl;
    }else{
        cout << "THe first choice is better." << endl;
    }
}
/*
brandons-air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P30_PennyThatDoublesOrMillion.cpp -o P30_PennyThatDoublesOrMillion && "/Users/Brando/Desktop/C++Code/"P30_PennyThatDoublesOrMillion
2 day 1
4 day 2
8 day 3
16 day 4
32 day 5
64 day 6
128 day 7
256 day 8
512 day 9
1024 day 10
2048 day 11
4096 day 12
8192 day 13
16384 day 14
32768 day 15
65536 day 16
131072 day 17
262144 day 18
524288 day 19
1.04858e+06 day 20
2.09715e+06 day 21
4.1943e+06 day 22
8.38861e+06 day 23
1.67772e+07 day 24
3.35544e+07 day 25
6.71089e+07 day 26
1.34218e+08 day 27
2.68435e+08 day 28
5.36871e+08 day 29
1.07374e+09 day 30 
*/