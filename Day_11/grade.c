#include <stdio.h>
struct course
{
    char co[5];
    int cr;
};
struct grade
{
    char grade;
    int score;
    int grde_point;

};
int main()
{
    int ind;
    struct course crse[5];
    struct grade grde[5];
    float GPA = 0.0;
    int credit =0;
    for(ind =0;ind<5;ind++)
    {
        printf("Enter course %d\n",ind+1);
        scanf("%s", &crse[ind].co);
        printf("Enter credit for course %d \n",ind+1);
        scanf("%d",&crse[ind].cr);
    }
    for(ind = 0; ind < 5; ind++)
    {
        printf("Enter score for course %d: ",ind+1);
        scanf("%d", &grde[ind].score);
    }
    for(ind =0;ind<5;ind++)
    {
        if(grde[ind].score >= 90)
        {
            grde[ind].grade = 'S';   
            grde[ind].grde_point = 10;
        }
        else if (grde[ind].score >= 80) 
        {
            grde[ind].grade = 'A';    
            grde[ind].grde_point = 9;
        }
        else if (grde[ind].score >= 70)
        {
            grde[ind].grade = 'B'; 
            grde[ind].grde_point = 8;
        }
        else if (grde[ind].score >= 60)
        {
            grde[ind].grade = 'C'; 
            grde[ind].grde_point = 6;
        } 
        else
        {
            grde[ind].grade = 'F'; 
            grde[ind].grde_point = 0;
        }
        GPA += grde[ind].grde_point * crse[ind].cr;
        credit += crse[ind].cr;
        printf("Course %s: Grade %c, Grade Point %d\n", crse[ind].co, grde[ind].grade, grde[ind].grde_point);
    }
    float SGPA = GPA / credit;
    printf("\nTotal GPA: %.2f\n",GPA);
    printf("SGPA: %.2f\n", SGPA);

}