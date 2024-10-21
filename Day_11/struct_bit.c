/*
Program : To perform bitwise operation using struct.
Date : [17-10-24]
Revision : Nill
Author : Anand Sajeev A
*/

#include <stdio.h>
struct bitwise
{
    int v1;
};
struct bit_res
{
  int and;
  int or;
  int xor;

};
int main()
{
    struct bitwise in1,in2;
    struct bit_res res;
    printf("Enter values to perform bitwise operation\n");
    printf("Enter 1st value\n");
    scanf("%X",&in1.v1);
    printf("Enter 2st value\n");
    scanf("%X",&in2.v1);
    res.and = in1.v1 & in2.v1;
    printf("AND operation result %X\n",res.and);
    res.or = in1.v1 | in2.v1;
    printf("OR operation result %X\n",res.or);
    res.xor = in1.v1 ^ in2.v1;
    printf("XOR operation result %X\n",res.xor);
}


