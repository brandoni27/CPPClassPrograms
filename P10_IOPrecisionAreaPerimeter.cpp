//Brandon Washington
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float height,width,area,perimeter;
    cout << "Please enter height: " << endl;
    cin >> height;
    cout << "Please enter weight:" << endl;
    cin >> width;
    area = height * width;
    perimeter = 2*(height + width);
    cout << fixed << setprecision (2) << "The area is: " << area << endl;
    cout << fixed << setprecision (2) << "The perimeter is: " << perimeter << endl;
    return 0;
}
/*
Please enter height: 
39.2
Please enter weight:
279.3
The area is: 10948.56
The perimeter is: 637.00
*/