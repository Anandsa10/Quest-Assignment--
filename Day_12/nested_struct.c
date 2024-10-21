/*
Program : To demonstrate nested structure.
Date : [18-10-24]
Revision : Nill
Author : Anand Sajeev A
*/

#include <stdio.h>
//#pragma pack(1)
struct structure
{
    int var;
    struct strt2
    {
        int var2;
        char ch2;
    }__attribute((packed))__,st2; //ch2=1, ch= 3+1 total 4+4+1+3 =12
 
 char ch;
};//__attribute((packed))__; //ch = 1 and ch2 =1+3, total = 4+4+(1+3)+1 =13
int main()
{
//  struct strt2 st2;
 struct structure st1 = {.var = 5, .ch = 'a',.st2.var2 = 6, .st2.ch2 = 'b'};
 
 printf("Outer Structure  : value of var is %d\n",st1.var);
 printf(" Outer Structure : value of char is %c\n",st1.ch);
 printf(" Inner Structure : value of int is %d\n",st1.st2.var2);
 printf(" Ineer Structure : value of char is %c\n",st1.st2.ch2);
 printf("size :%d",sizeof(st1));
}