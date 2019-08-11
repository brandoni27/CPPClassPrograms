//Brandon Washington
#include <iostream>
using namespace std;

int main()
{
    int count, limit,pounds,kilos;
    cout << "How long do you want the table to be? (Max lbs.) "<< endl;
    cin >> limit;
    cout << "Kilograms      Pounds" << endl;
    while (count<limit){
        pounds = kilos * 2.20462262185;
        cout << kilos <<"kg"<<"      ==         "<< pounds <<"lbs"<< endl;
        count++;
        kilos++;
    }
    return 0;

}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P20_ConversionTable.cpp -o P20_ConversionTable && "/Users/Brando/Desktop/C++Code/"P20_ConversionTable
How long do you want the table to be? (Max lbs.) 
50
Kilograms      Pounds
1kg      ==         2lbs
2kg      ==         4lbs
3kg      ==         6lbs
4kg      ==         8lbs
5kg      ==         11lbs
6kg      ==         13lbs
7kg      ==         15lbs
8kg      ==         17lbs
9kg      ==         19lbs
10kg      ==         22lbs
11kg      ==         24lbs
12kg      ==         26lbs
13kg      ==         28lbs
14kg      ==         30lbs
15kg      ==         33lbs
16kg      ==         35lbs
17kg      ==         37lbs
18kg      ==         39lbs
19kg      ==         41lbs
20kg      ==         44lbs
21kg      ==         46lbs
22kg      ==         48lbs
23kg      ==         50lbs
24kg      ==         52lbs
25kg      ==         55lbs
26kg      ==         57lbs
27kg      ==         59lbs
28kg      ==         61lbs
29kg      ==         63lbs
30kg      ==         66lbs
31kg      ==         68lbs
32kg      ==         70lbs
33kg      ==         72lbs
34kg      ==         74lbs
35kg      ==         77lbs
36kg      ==         79lbs
37kg      ==         81lbs
38kg      ==         83lbs
39kg      ==         85lbs
40kg      ==         88lbs
41kg      ==         90lbs
42kg      ==         92lbs
43kg      ==         94lbs
44kg      ==         97lbs
45kg      ==         99lbs
46kg      ==         101lbs
47kg      ==         103lbs
48kg      ==         105lbs
49kg      ==         108lbs
50kg      ==         110lbs 
*/