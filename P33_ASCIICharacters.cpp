//Brandon Washington
#include<iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

int main(){
    int asciiNumber = 33; 
    char asciiCharacter;
    do{
        asciiCharacter = asciiNumber;
        cout << asciiCharacter << " ";
        asciiNumber++;
    }while(asciiNumber <= 126);

    return 0;
}
/*
Brandons-MacBook-Air:C++Code Brando$ cd "/Users/Brando/Desktop/C++Code/" && g++ P33_ASCIICharacters.cpp -o P33_ASCIICharacters && "/Users/Brando/Desktop/C++Code/"P33_ASCIICharacters
! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ Brandons-MacBook-Air:C++Code Brando$ 
 */