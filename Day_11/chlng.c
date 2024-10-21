#include <stdio.h>
#include <string.h>
void comp(char *str);
int main() 
{
    char str[100];
    printf("Enter a string to compress: ");
    scanf("%s", str);
    comp(str);
}
void comp(char *str) 
{
    int len = strlen(str);
    int ind = 0;
    while(ind < len) 
    {
        int count = 1;
        printf("%c", str[ind]);
        while(str[ind] == str[ind + 1]) 
        {
            count++;
            ind++;
        }
        if(count > 1) 
        {
            printf("%d", count);
        }
        ind++;
    }
    printf("\n");
}
