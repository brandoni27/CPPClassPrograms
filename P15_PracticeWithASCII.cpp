//Brandon Washington
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char character;
    cout << "Enter any letter or number from the keyboard.";
    cin >> character;
    cout << "what you entered: " << character << endl;
    cout << "ASCII number of what you entered: " << int(character)<< endl;
    if(int(character) > 65 && int(character) < 91)
    {
        cout << "You entered a upper case letter.";
    }else if(int(character) > 97 && int(character) < 122)
    {
        cout << "You entered a lower case letter.";
    }else if(int(character) > 48 && int(character) < 57)
    {
        cout << "You entered a number.";
    }else{
        cout << "What you entered neither a letter of a number." <<endl;
    }

    return 0;
}

/*

Enter any letter or number from the keyboard.B
what you entered: B
ASCII number of what you entered: 66
You entered a upper case letter.

Enter any letter or number from the keyboard.b
what you entered: b
ASCII number of what you entered: 98
You entered a lower case letter.

Enter any letter or number from the keyboard.4
what you entered: 4
ASCII number of what you entered: 52
You entered a number.

Enter any letter or number from the keyboard.~
what you entered: ~
ASCII number of what you entered: 126
What you entered neither a letter of a number.
 */