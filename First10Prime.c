//WAP to PrinT First 10 Prime No.
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n,i,f=0,c;
    for(n=2,c=0;c<10;n++){
        f=0;
        for(i=2;i<= sqrt(n);i++)
        {
            if(n%i==0)
            {   
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d \n",n);
            c++;
        }
    }
    
    return 0;
}
