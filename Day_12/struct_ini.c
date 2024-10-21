/*
Program : To demonstrate methods to initialze structure.
Date : [18-10-24]
Revision : Nill
Author : Anand Sajeev A
*/

#include <stdio.h>
struct structure
{
 int var;
 char ch;
};
int main()
{
 struct structure st1 = {.var = 5, .ch='a'};
 printf("Value of var is %d\n",st1.var);
 printf("Value of char is %c\n",st1.ch);
}