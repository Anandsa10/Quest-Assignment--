/*
program ; To calculate marks of student and rank them
Revision : Nill
Date : [21-10-24]
Author : Anand Sajeev A
*/

#include <stdio.h>

struct student
{
    char name[10][10];
    char temp[10];
    int avg;
    struct marks
    {
        char course[3][10];
      int mark[10];
    }mrk;
}std[20];

void calc_mark(int n);
void calc_avg(int n);
void ranl_std(int n);
int main()
{
    int ind,n;
    printf("Enter number of students\n");
    scanf("%d",&n);
    for(ind=0;ind<n;ind++)
    {
        printf("Enter name of %d ",ind+1);
        scanf("%s",std[ind].name);
    }
    calc_mark(n);
    calc_avg(n);
    ranl_std(n);
}
void calc_mark(int n)
{
    int ind,jnd;
    for(ind =0;ind<n;ind++)
    {
      printf("Enter 3 couse and marks of %s \n",std[ind].name);
      for(jnd=0;jnd<3;jnd++)
      {
        printf("Course %d ",jnd+1);
        scanf("%s",&std[ind].mrk.course[jnd]);
        printf("Mark of course %s ",std[ind].mrk.course[jnd]);
        scanf("%d", &std[ind].mrk.mark[jnd]);
        
      }
    }
}
void calc_avg(int n)
{
 int ind,jnd,total;

 for(ind =0;ind<n;ind++)
 {
    total=0;
    for(jnd=0;jnd<3;jnd++)
    {
      total += std[ind].mrk.mark[jnd];
    }
    std[ind].avg = total/3;
    printf("Average marks of %s: %d\n", std[ind].name, std[ind].avg);
 }
}
void ranl_std(int n)
{
  int ind,jnd;
  struct student temp;
  
    for(ind =0;ind<n-1;ind++)
    {
        for(jnd =ind+1;jnd<n;jnd++)
        {
            if(std[ind].avg < std[jnd].avg)
            {
                
                temp = std[ind];
                std[ind] = std[jnd];
                std[jnd] = temp;
            }
        }
    }
  printf("Rank list\n");
  for(ind =0;ind<n;ind++)
  {
    printf("Rank %d  \t name %s \t mark %d\t",ind+1, std[ind].name, std[ind].avg);
    printf("\n");
  }
}