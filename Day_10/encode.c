/*
Program : To make first and last occurance of key character to asterick(*) and rest occurance of key character to hash(#).
Revision : Edited code not to traverse entire string.
Date : 16-10-24
Author : Anand Sajeev A
*/



#include <stdio.h>
#include <string.h>

void encode(char *str1, char ch);
int main()
{
    char str1[25];
    char ch;
    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter key char\n");
    scanf(" %c",&ch);

    encode(str1,ch);
}
void encode(char *str1, char ch)
{
    char *ptr1 = NULL, *ptr2 = NULL;
    int ind;
    ptr1 = strchr(str1, ch);
    ptr2 = strrchr(str1, ch);
    if(ptr1 != NULL && ptr2 != NULL)
    {
        for(ind = ptr1-str1+1;ind<ptr2-str1;ind++)
        {
            if(str1[ind] == ch)
            {
                str1[ind] = '$';
            }
        }
        *ptr1 = '*';
        *ptr2 = '*';
        printf("Encoded String: %s\n", str1);
    }
    else
    {
        printf("Character not found. \n");
    }
}