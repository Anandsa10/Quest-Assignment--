/*
Program: TO check eligibility of student and then allocate an exam room.
Date : [18-10-24]
Revision : Made more test case and made user input for each student division
Author: Anand Sajeev A
*/


#include <stdio.h>
#include <string.h>

struct exam
{
    char std[10][50];
    char div[10];
    char status[10];
    int room_count;
    int room_capacity;
    struct branch
    {
        int cse;
        int ece;
    } brch;
} xam;

struct eligib
{
    int ia[10];
    float attnd[10];
} elig;

void cal_eli();  // check eligibility
void allocate(); // allocate room
int main()
{
    int ind;
    printf("Enter names of each student and branch(CSE/ECE):\n");
    for (ind = 0; ind < 10; ind++)
    {
        printf("Student %d: ", ind + 1);
        scanf("%s %s", &xam.std[ind], &xam.div[ind]);
    }
    printf("Enter IA of each student\n");
    for (ind = 0; ind < 10; ind++)
    {
        printf("Student %d: ", ind + 1);
        scanf("%d", &elig.ia[ind]);
    }
    printf("Enter attendence of each student\n");
    for (ind = 0; ind < 10; ind++)
    {
        printf("Attendance %d: ", ind + 1);
        scanf("%f", &elig.attnd[ind]);
    }
    printf("Enter capacity of room\n");
    scanf("%d", &xam.room_capacity);
    cal_eli();
    allocate();

    for (ind = 0; ind < 10; ind++)
    {
        printf("%s: status: %c\t IA:%d\t Attendence: %.2f\t ", xam.std[ind], xam.status[ind], elig.ia[ind], elig.attnd[ind]);
        printf("\n");
    }
    printf("number of cse stuents %d\n", xam.brch.cse);
    printf("number of ece stuents %d\n", xam.brch.ece);
    printf("Number of rooms %d\n", xam.room_count);
}
void cal_eli() // check eligibility
{
    int ind;
    for (ind = 0; ind < 10; ind++)
    {
        if(elig.ia[ind] < 20 || elig.ia[ind] > 50 || elig.attnd[ind] < 60 || elig.attnd[ind] > 99)
        {
            xam.status[ind] = 'N';
        }
        else
        {
            xam.status[ind] = 'E';
        }
    }
}
void allocate() // allocate room
{
    int ind;
    xam.brch.cse = 0;
    xam.brch.ece = 0;
    for(ind=0;ind<10;ind++)
    {
     if(xam.div[ind] == 'C' && xam.status[ind] == 'E' )
     {
        xam.brch.cse++;
     }
     else if (xam.div[ind] == 'E' && xam.status[ind] == 'E')
     {
        xam.brch.ece++;
     }
     
    }
    xam.room_count = 0; 
    if (xam.brch.cse > 0)
    {
        xam.room_count += (xam.brch.cse / xam.room_capacity);
        if (xam.brch.cse % xam.room_capacity != 0)
        {
            xam.room_count++;
        }
    }

    if (xam.brch.ece > 0)
    {
        xam.room_count += (xam.brch.ece / xam.room_capacity);
        if (xam.brch.ece % xam.room_capacity != 0)
        {
            xam.room_count++;
        }
    }
}