/*
Program : To demonstrate strpbrk string function
Revision : Nill
Date : 16-10-24
Author : Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "khakum";
    char vowel[] = "aeiou";
    char *ptr_ch;
    ptr_ch= strpbrk(str,vowel);
    printf("Vowel %c present at %d and address is %x", *ptr_ch, ptr_ch - str, ptr_ch);
}