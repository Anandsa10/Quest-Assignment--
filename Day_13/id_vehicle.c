/*
Program: To fetch details of a vehicle based on ID.
Revsion : Added option to ask user to continue fetching.
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
void fetch_Vehicle(int n);

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
    fetch_Vehicle(n);
    return 0;
}
//function to input Vehicle ID
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
//function to input Vehicle model
void fetch_Model(int ind)
{
    printf("Enter vehicle model for ID %d: ",veh[ind].id);
    scanf("%s",veh[ind].model);
}
//function to input fuel capacity
void fetch_Tank(int ind) 
{
    printf("Enter vehicle tank capacity for ID %d: ",veh[ind].id);
    scanf("%d", &veh[ind].fuel);
}
//function to input seat capacity
void fetch_Seat(int ind) 
{
    printf("Enter vehicle seat capacity for ID %d: ",veh[ind].id);
    scanf("%d", &veh[ind].seat);
}
//function to input engine capacity
void fetch_Engine(int ind) 
{
    printf("Enter vehicle engine capacity (CC) for ID %d: ",veh[ind].id);
    scanf("%d", &veh[ind].eng);
}
//function to fetch vehicle based on Vehicle ID.
void fetch_Vehicle(int n)
{
    char choice;
    do{
    int m,ind;
    int found =0;
    printf("Enter ID to be fetch vehicle\n");
    scanf("%d",&m);
    for(ind =0;ind<n;ind++)
    {
      if(veh[ind].id == m)
      {
        printf("Vechicle ID: %d \t Vehicle Model: %s \t Vehicle tank capacity: %d \t Vehicle seat capacity: %d \t vehicle engine capacity: %d \t",veh[ind].id,veh[ind].model,veh[ind].fuel,veh[ind].seat,veh[ind].eng);
        found =1;
      }
    }
    if(!found)
    {
        printf("No valid ID\n");
    }
    printf("Do you want search again\n");
    scanf(" %c", &choice);
   } while (choice == 'y' || choice == 'Y');
}