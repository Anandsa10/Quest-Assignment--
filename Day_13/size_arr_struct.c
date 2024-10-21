/*
Program: To demonstrate size of array structre and structure variables.
Date: [21-1-24]
Revision : Nill
Author : Anand Sajeev A
*/


#include <stdio.h>
int main()
{
    struct array_structure
    {
      int v;
      char ch;
    };
    struct array_structure arr[5];
    int ind;
    for(ind=0;ind<5;ind++)
    {
        scanf("%d", &arr[ind].v);
    }
    printf("Values are\n");
    for(ind=0;ind<5;ind++)
    {
        printf("%d \n",arr[ind].v);
    }
    printf("size of array %d\n",sizeof(arr));
    printf("size of structure variables %d\n",sizeof(struct array_structure));
    printf("size of structure variable char %d\n",sizeof(arr[5].ch));
    printf("size of structure variable int %d\n",sizeof(arr[5].v));
}