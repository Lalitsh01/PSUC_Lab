/*
    *
   **
  ***
 ****
*****
  */
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=1;j <= i-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=6-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
