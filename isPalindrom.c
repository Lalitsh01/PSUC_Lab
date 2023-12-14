#include <stdio.h>
#include <string.h>
//WAP To Check a String Palindrom
void main()
{
  int i,l,k,f=0;
  char str1[20];
  printf("Enter a String to check it's Palindrom or Not : \n");
  scanf("%s",str1);
  fflush(stdin);
  l = strlen(str1);
  for(i=0,k=l-1;i<k;i++,k--)
  {
    if(str1[i] != str1[k-1])
    {
      f=1;
      break;
    }
    
  }
  if(f=0)
    printf("%s is a Palindrom! ",str1);
  else
    printf("%s is not Palindrom! ",str1);
}
