#include <stdio.h>
#include <string.h>

int main() {
   
   /*char fname[10]="Lalit ";
   char lname[10]="Sharma";
   char c;
   //int i=strlen(a);
   strcat(fname,lname);
   printf("%s",fname);
  */
  // Find Length Of String 
  /*
  char str[20]="lalitsharma";
  char str2[20];
  int i;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      str2[i] = str[i]-32;
    }
  }
  printf("str2: %s",str2);
  */
  //printf("Length: %d",i);
  char str1 []="Anil";
  char str2 []="Amol";
  int x = strcmp(str1,str2);
  if(x > 0)
  {
    printf("%s",str1);
  }
  else if(x < 0)
  {
    printf("%s",str2);
  }
  else
  {
    printf("%s = %s ",str1,str2);
  }
  //printf("Result: %d",x);
   return 0;
}
