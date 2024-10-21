/*
Program : To demonstrate strchr string function
Revision : Nill
Date : 16-10-24
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Wonder oven";
    char ch;
    printf("Enter a chracter\n");
    scanf(" %c", &ch);
    char *pt_ch;
    pt_ch = strchr(str, ch);
    if(pt_ch != NULL)
    {
     printf("Position of character  %c is %d ", *pt_ch, pt_ch - str);
     printf("Address is %X", pt_ch);
    }
    else
    {
      printf("Char not in str\n");
    }
}