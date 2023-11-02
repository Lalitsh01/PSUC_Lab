//WAP to check Prime No. using Flag and Not using Function
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n,i,f=0;
    printf("Enter Any No. : ");
    fflush(stdin);
    scanf("%d",&n);
    
    for(i=2;i<= sqrt(n);i++)
    {
        
        if(n%i==0)
        {
          f=1;
          printf("%d ia NOT a Prime No. ",n);
          break;
        }
    }
    if(f==0)
        printf("%d ia Prime No. ",n);
    
    return 0;
}
