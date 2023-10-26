//Pls Note using 'int' ,First of all CHECK its environment Architecture first [Code Written in 32-bit ]
//[Code Written in 32-bit || Range: [A 32-bit signed integer. It has a minimum value of -2,147,483,648 and a maximum value of 2,147,483,647 (inclusive). A 32-bit unsigned integer. It has a minimum value of 0 and a maximum value of 4,294,967,295 (inclusive).]
#include <stdio.h>
#include <conio.h>

void main()
{
    int num,r;
    int factorial(int); //protoTyping
    printf("Enter Any Natural No. :: ");
    scanf("%d",&num);
    
    r = factorial(num); //CALLING
    printf("Factorial of %d :: %d",num,r);
}
int factorial(int n)
{
   int f=1,i;
   for(i=1;i<=n;i++)
   {
       f = f*i;
   }
   return f;
}
