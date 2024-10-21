/*
Program: Sort vehicle based on Engine Capacity
Revsion : Nill
Date : [21-10-24]
Author : Anand Sajeev A
*/

#include <stdio.h>

struct vehicle {
    char model[10];
    int id;
    int fuel;
    int eng;
    int seat;
} veh[10];

int fetch_Id(int n);
void fetch_Model(int ind);
void fetch_Tank(int ind);
void fetch_Seat(int ind);
void fetch_Engine(int ind);
void sort_Vehicle(int n);

int main() 
{
    int n,ind;
    printf("Enter number of vehicles :");
    scanf("%d", &n);
    if(fetch_Id(n) == -1) 
    {
        printf("Not unique ID\n");
        return 0;
    }
    for(ind = 0;ind<n;ind++) 
    {
        fetch_Model(ind);
        fetch_Tank(ind);
        fetch_Seat(ind);
        fetch_Engine(ind);
    }
    sort_Vehicle(n);
    return 0;
}
int fetch_Id(int n) 
{
    int id,ind,jnd;
    printf("Enter vehicle ID (MUST BE UNIQUE)\n");
    for(ind =0;ind<n;ind++)
    {
        scanf("%d", &id);
        for(int jnd =0;jnd<ind;jnd++)
        {
            if(veh[jnd].id == id) {
                printf("ID must be unique\n");
                return -1; 
            }
        }
        veh[ind].id = id;
    }
    return 0;
}
void fetch_Model(int ind)
{
    printf("Enter vehicle model for ID %d: ",veh[ind].id);
    scanf("%s",veh[ind].model);
}
void fetch_Tank(int ind) 
{
    printf("Enter vehicle tank capacity for ID %d: ",veh[ind].id);
    scanf("%d", &veh[ind].fuel);
}
void fetch_Seat(int ind) 
{
    printf("Enter vehicle seat capacity for ID %d: ",veh[ind].id);
    scanf("%d", &veh[ind].seat);
}
void fetch_Engine(int ind) 
{
    printf("Enter vehicle engine capacity (CC) for ID %d: ",veh[ind].id);
    scanf("%d", &veh[ind].eng);
}
// Bubble sort
void sort_Vehicle(int n) 
{
    int ind,jnd;
    struct vehicle temp;
    for(ind = 0;ind<n-1;ind++) 
    {
        for(jnd =ind+1;jnd<n;jnd++) 
        {
            if(veh[ind].eng < veh[jnd].eng)
            {
                temp = veh[ind];
                veh[ind] = veh[jnd];
                veh[jnd] = temp;
            }
        }
    }
    printf("Rank list\n");
    for(int ind = 0; ind < n; ind++)
    {
        printf("Rank %d \t Model %s \t Engine Capacity %d\n", ind + 1, veh[ind].model, veh[ind].eng);
    }
}
