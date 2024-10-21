#include <stdio.h>
struct array1
{
 int arr1[10];

};
struct array2
{
    int arr2[10];
};
int main()
{
    int n,m,ind,sum=0;
    struct array1 v1;
    struct array2 v2;
    printf("enter size of 1st array\n");
    scanf("%d",&n);
    printf("enter element of 1st array\n");
    for(ind =0;ind<n;ind++)
    {
        scanf("%d ",&v1.arr1[ind]);
    }
    printf("enter size of 2st array\n");
    scanf("%d",&m);
    printf("enter element of 2st array\n");
    for(ind =0;ind<m;ind++)
    {
        scanf("%d ",&v2.arr2[ind]);
    }
    if(n<m)
    {
        for(ind =0;ind<n;ind++)
        {
            v1.arr1[ind] += v2.arr2[ind];
            printf("Sum of element %d: %d\n", ind + 1, v1.arr1[ind]);
        }
    }
    else
    {
        for(ind =0;ind<m;ind++)
        {
            v2.arr2[ind] += v1.arr1[ind];
            printf("Sum of element %d: %d\n", ind + 1, v2.arr2[ind]);
        }
    }

}