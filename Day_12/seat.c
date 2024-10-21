/*
Program: To allocate an exam room for student.
Date : [18-10-24]
Revision : Nill
Author: Anand Sajeev A
*/


#include <stdio.h>
#include <math.h>
struct collage
{
    int std_count;
    int room_count;
    int room_capacity;
    struct branch
    {
     int cse;
     int ece;
    }brch;

}clg;

int main()
{
    printf("Enter total students\n");
    scanf("%d" ,&clg.std_count);
    printf("Enter room capacity\n");
    scanf("%d",&clg.room_capacity);
    clg.brch.cse = clg.std_count / 2;
    clg.brch.ece = clg.std_count -clg.brch.cse;
    clg.room_count = clg.std_count/clg.room_capacity;

    if(clg.brch.cse % clg.room_capacity !=0 && clg.brch.cse % clg.room_capacity !=0 )
    {
        clg.room_count++;
    }
    printf("toal CSE students ; %d\n",clg.brch.cse);
    printf("Toal ECE student : %d\n",clg.brch.ece);
    printf("One room has %d students\n",  (clg.room_count *clg.room_capacity) - clg.std_count );
    printf("total rooms :%d",clg.room_count);

}