/*
Program : To scan and print array values using struct.
Date : [17-10-24]
Revision : Nill
Author : Anand Sajeev A
*/



#include <stdio.h>
struct struct_array
{
    int arr1[10];
    
};
int main()
{
    struct struct_array v1;
    int ind,n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(ind =0;ind<n;ind++)
    {
        scanf("%d", &v1.arr1[ind]);
    }
    printf("Values\n");
    for(ind =0;ind<n;ind++)
    {
        printf("%d ",v1.arr1[ind]);
    }
}
