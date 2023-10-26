//print no using 1,12,123 ND 1,22,333,4444,55555 Pattern Programme
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j ;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
/*
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j ;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
*/
