/*
Program : To demonstrate strstr string function
Revision : Nill
Date : 16-10-24
Author : Anand Sajeev A
*/



#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "welcome to ooty nice to meet you";
    char sub[10];
    char *ptr;
    gets(sub);
    ptr = strstr(str1,sub);
    if(ptr !=NULL)
    {
        printf(" %s\n",ptr);

    }
    else
    {
     printf("Substring not found\n");
    }
}