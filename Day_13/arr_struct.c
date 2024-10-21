/*
Program: To demonstrate array of structure
Date : [21-10-24]
Revision : Nill
Author : Anand Sajeev A
*/


#include <stdio.h>
struct arr_struct
{
    int v;

}arr[5];

int main()
{
    // struct arr_struct arr[5];
    int ind;
    for(ind =0;ind<5;ind++)
    {
        scanf("%d", &arr[ind].v);
    }
    printf("Values are\n");
    for(ind=0;ind<5;ind++)
    {
        printf("%d \n",arr[ind].v);
    }

}