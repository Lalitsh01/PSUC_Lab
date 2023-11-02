//WAP to check Prime No. using FunCn
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int isPrime(int);
    int n,r;
    printf("Enter Any No. : ");
    fflush(stdin);
    scanf("%d",&n);
    
    r = isPrime(n);
    if(r==1)
    {
        printf("%d ia Prime No. ");
    }
    else
    {
        printf("%d ia NOT a Prime No. ");
    }
    return 0;
}
int isPrime(int n)
{
    int i;
    for(i=2;i<= sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1; 
}
