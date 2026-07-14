#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//  String Declaration
   char name[50];
   printf("Enter your name :");
   scanf("%49s", name);
   printf("I'm %s\n", name);

   
//    Int Declaration

 int number;
 printf("Enter a number :");
 scanf("%d",&number);
 printf("You entered this number : %d\n", number);

 
//   Float  Declaration

float myNum;
printf("Enter a float number :");
scanf("%f",&myNum);
printf("You entered this float number : %.2f\n", myNum);

//  Constat declaration

 const float PI = 3.14f;
 printf("This is the constant PI : %.2f\n", PI);

return EXIT_SUCCESS;


}