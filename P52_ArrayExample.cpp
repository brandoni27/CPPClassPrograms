//Brandon Washington
#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{
    int i;
    int velocity[5];
    float distance[] = {10,23.4,20,40.86};
    float time[3];
    time[0] = 100;
    time[1] = 200;
    time[2] = 300;

    for (int i=0; i < 3; i++)
    {
        cout << "time: " << time[i] << endl;
    }
    for (i=0; i<5; i++)
    {
        cout << "Enter velocity # " << i+1 << " : ";
        cin >> velocity[i];
    }
    for (i=0; i < 5; i++)
    {
        cout << velocity[i];
        if(i<4)
            cout << ",";
    }
    cout << endl;

    system("pause");
    return 0;
}