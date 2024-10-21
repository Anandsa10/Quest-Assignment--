/*
Program : To demonstrate strpbrk string function without built-in function and return every occurance in key string.
Revision : Nill
Date : 16-10-24
Author : Anand Sajeev A
*/



#include <stdio.h>
#include <string.h>

void breakComp(char *target, char *key);
int main()
{
    char target[] = "we live in a simulation";
    char key[10];
    printf("Enter key string : ");
    scanf("%s", key);
    breakComp(target,key);
}
void breakComp(char *target, char *key)
{
    int count,ind=0,jnd=0;
    for(ind = 0; *(key +ind) != '\0';ind++)
    {
      count = 0;
      for(jnd = 0; *(target +jnd) != '\0';jnd++)
      {
        if(*(key +ind ) == *(target +jnd))
        {
            count++;
        }
      }
      printf("THe character %c has occurance %d",*(key +ind),count);
      printf("\n");
    }
}