/*
Program : To input a string a store in buffer make it in csv format
Revision : Nill
Date : 16-10-24
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
void csv(char *str, char *buffer);
int main() 
{
    char buffer[50];
    char str[] = "make america great again ";
    csv(str, buffer);
    printf("csv string: %s\n", buffer);
}

void csv(char *str, char *buffer)
{
    int buf_ind = 0,i;
    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            buffer[buf_ind++] = ','; 
        } else
        {
            buffer[buf_ind++] = str[i];
        }
    }
    buffer[buf_ind] = '\0';
}
