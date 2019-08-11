//Brandon Washington
#include <iostream>
#include <cmath>
using namespace std;

void one(int a,int b,int c){
    int a2 = pow(a,2);
    int b2 = pow(b,2);
    int c2 = pow(c,2);

    if(a2==(b2+c2)){
        cout << "a2 = b2 + c2 is true" << endl;
    }
    else if(b2==(a2+c2)){
        cout << "b2 = a2 + c2 is true" << endl;
    }
    else if(c2==(a2+b2)){
        cout << "c2 = a2 + b2 is true" << endl;
    }else{
        cout << "a2 != b2 + c2    and    b2 != a2 + c2   and   c2 != a2 + b2 " << endl;
    }

}
void two(int a,int b,int c){
    
    if(a == b && b == c){
        cout << "a = b = c is true" << endl;
    }else{
        cout << "a = b = c is not true" << endl;
    }
}
int check2(int a, int b, int c){
    if(a==b && b==c){
        return 1;
    }else{
        return 0;
    }
}
int check1(int a,int b, int c){
    int a2 = pow(a,2);
    int b2 = pow(b,2);
    int c2 = pow(c,2);

    if(a2==(b2+c2)){
        return 1;
    }
    if(b2==(a2+c2)){
        return 1;
    }
    if(c2==(a2+b2)){
        return 1;
    }
    return 0;
}
void three(int a, int b, int c){
    
    if(check1(a,b,c) == 0 & check2(a,b,c) == 0){
        cout << "Neither!!!" << endl;
    }
}
int main()
{
    int a,b,c;
    cout << "Input 3 numbers: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    one(a,b,c);
    two(a,b,c);
    three(a,b,c);

}

/*


Input 3 numbers: 
3
4
5
c2 = a2 + b2
a = b = c is not true

Input 3 numbers: 
5
5
5
a2 != b2 + c2    and    b2 != a2 + c2   and   c2 != a2 + b2 
a = b = c is true

Input 3 numbers: 
5
6
7
a2 != b2 + c2    and    b2 != a2 + c2   and   c2 != a2 + b2 
a = b = c is not true
Neither!!! 



*/