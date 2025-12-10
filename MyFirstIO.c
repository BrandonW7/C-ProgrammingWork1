#include <stdio.h> //include standard input out library 

int main(){
    //Declare variable of different types

    int myInt = 10;
    float myFloat = 3.14;
    char myChar = 'A';

    //Print values to the screen
    printf("Integer value: %d\n", myInt);
    printf("Float value: %.2f\n", myFloat);
    printf("Character value: %c\n", myChar);

    return 0;

}

/*Explanation:
Include stdio.h → Allows the use of printf() and other input/output functions.
Declare variables:
int myInt = 10; → Stores a whole number.
float myFloat = 3.14; → Stores decimal values.
char myChar = 'A'; → Stores a single character.
Print them using printf() with proper format specifiers (%d, %f, %c).*/