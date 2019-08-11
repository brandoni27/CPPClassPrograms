//Brandon Washington
#include <iostream>
using namespace std;

void shiftright (int myarray[], int size);

int main (void)
{
int myarray []= {1, 3, 5, 7, 9};

shiftright( myarray, 5);

for ( int i=0; i<5; i++) 
{
	cout << myarray[i] << ' ';
}

return(0);

}

void shiftright (int myarray[], int size)
{
  
int temp;
int temp1;

for (int i=0; i<(size -1); i++)
{
	temp = 	myarray[size-1];
	myarray[size-1] = myarray[i];
	myarray[i] = temp;
}


}