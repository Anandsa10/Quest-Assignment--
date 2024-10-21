/*
Program : To demonstrate strtok string function
Revision : Nill
Date : 16-10-24
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "I'm doing well";
    char delim[] =" ";
    char *token;
    int count =0;
    token = strtok(str, delim);
    while(token != NULL)
    {
     count++;
     token = strtok(NULL, delim);
    }
    printf("number of words: %d\n", count);
}