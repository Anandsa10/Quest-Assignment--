/*
Program : To copy contents in a structure variable to another structure variable.
Date : [17-10-24]
Revision : Nill
Author : Anand Sajeev A
*/

#include <stdio.h>
struct personal
{
 int age;
 char name[10];
 char place[10];

};
int main() 
{
    struct personal st1;
    struct personal st2;

    printf("Enter age ");
    scanf("%d", &st1.age);
    printf("Enter name ");
    scanf(" %s",st1.name); 
    printf("Enter place ");
    scanf(" %s",st1.place); 
    st2 = st1;
    printf("\nDetails:\n");
    printf("Name: %s\n",st2.name);
    printf("Age: %d\n",st2.age);
    printf("Place: %s\n",st2.place);
}