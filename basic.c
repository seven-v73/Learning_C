#include <stdio.h>

int main(){
    char name[] = "Seven";
    printf("I'm %s\n", name);
    printf("I am learning C\n");
    printf("And it is awesome\n");
    

    //  Declaring or Creating variables
    //     To create a variable, you must specify the type and give the variable a name.

    // You can also assign a value at the same time:

    // Syntax
    // type variableName = value;

    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("My number is %d and my letter is %c", myNum, myLetter);
    return 0;

}