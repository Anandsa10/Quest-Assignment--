/*
Program : To demonstrate size of structure with vaying order of initilaization.
Date : [17-10-24]
Revision : Nill
Author : Anand Sajeev A
*/

#include <stdio.h>
#pragma pack(1)
struct structure
{
   int var;
   char ch2;
   int var2;
   char ch;

 
};//__attribute((packed))__;
int main()
{
 struct structure st1;
 printf("size is %d\n",sizeof(st1));
}