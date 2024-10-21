/*
Program : To demonstrate size of structure with vaying order of initilaization.
Date : [17-10-24]
Revision : Nill
Author : Anand Sajeev A
*/

#include <stdio.h>
struct structure
{
   int var;
   char ch2;
   int var2;
   char ch;

 
};
int main()
{
 struct structure st1;
//  st1.var;
//  st1.ch;
//  printf("Enter an integer\n");
//  scanf("%d",&st1.var);
//  printf("Enter a character\n");
//  scanf(" %c",&st1.ch);
//  printf("Value of var is %d\n",st1.var);
//  printf("Value of char is %c\n",st1.ch);
 printf("size is %d\n",sizeof(st1));
}