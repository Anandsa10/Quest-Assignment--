/*
Program: Menu driven program to perform actions on vehicle details.
Revsion : Nill
Date : [21-10-24]
Author : Anand Sajeev A
*/


#include <stdio.h>
struct vehicle
{
    char model[10];
    int id;
    int fuel;
    int eng;
    int seat;
}veh[10];
int fetch_Id(int n);
void fetch_Model(int ind);
void fetch_Tank(int ind);
void fetch_Seat(int ind);
void fetch_Engine(int ind);
void fetch_Vehicle(int n);
void add_Vehicle(int *n);
void del_Vehicle(int *n);  
void disp_Vehicle(int n);
int main() 
{
    int n,ind,menu;
    printf("Enter number of vehicles:");
    scanf("%d",&n);
    if(fetch_Id(n) == -1)
    {
        printf("Not unique ID\n");
        return 0;
    }
    for(ind =0;ind<n;ind++) 
    {
        fetch_Model(ind);
        fetch_Tank(ind);
        fetch_Seat(ind);
        fetch_Engine(ind);
    }
    while(1)
    {
        printf("\n\nMenu Options:\n");
        printf("1.Fetch Vehicle by ID\n");
        printf("2.Add New Vehicle\n");
        printf("3.Delete Vehicle\n");
        printf("4.Display All Vehicles\n");
        printf("5.Exit\n");
        printf("Enter your option: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            fetch_Vehicle(n);
            break;
        case 2:
            add_Vehicle(&n);
            break;
        case 3:
            del_Vehicle(&n);
            break;
        case 4:
            disp_Vehicle(n);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid input\n");
            break;
        }
    }
    return 0;
}
// Function to input Vehicle ID
int fetch_Id(int n) 
{
    int id,ind,jnd;
    printf("Enter vehicle ID (MUST BE UNIQUE)\n");
    for(ind =0;ind<n;ind++)
    {
        scanf("%d",&id);
        for(jnd =0;jnd<ind;jnd++)
        {
            if(veh[jnd].id ==id) 
            {
                printf("ID must be unique\n");
                return -1; 
            }
        }
        veh[ind].id = id;
    }
    return 0;
}
// Function to input Vehicle model
void fetch_Model(int ind)
{
    printf("Enter vehicle model for ID %d: ", veh[ind].id);
    scanf("%s", veh[ind].model);
}
// Function to input fuel capacity
void fetch_Tank(int ind) 
{
    printf("Enter vehicle tank capacity for ID %d: ", veh[ind].id);
    scanf("%d", &veh[ind].fuel);
}
// Function to input seat capacity
void fetch_Seat(int ind) 
{
    printf("Enter vehicle seat capacity for ID %d: ", veh[ind].id);
    scanf("%d", &veh[ind].seat);
}
// Function to input engine capacity
void fetch_Engine(int ind) 
{
    printf("Enter vehicle engine capacity (CC) for ID %d: ", veh[ind].id);
    scanf("%d", &veh[ind].eng);
}
// Function to fetch a vehicle based on Vehicle ID
void fetch_Vehicle(int n)
{
    int id, ind, found = 0;
    printf("Enter the ID to fetch vehicle: ");
    scanf("%d", &id);
    for(ind = 0; ind < n; ind++)
    {
        if(veh[ind].id ==id)
        {
            printf("Vehicle ID: %d \t Model: %s \t Tank Capacity: %d \t Seat Capacity: %d \t Engine Capacity: %d\n",veh[ind].id, veh[ind].model, veh[ind].fuel, veh[ind].seat, veh[ind].eng);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("No valid vehicle found with ID %d\n", id);
    }
}
// Function to add a new vehicle
void add_Vehicle(int *n)
{
    int id, ind, flag = 1;
    if (*n >= 10)
    {
        printf("Vehicle array is full!\n");
        return;
    } 
    printf("Enter new vehicle ID (must be unique): ");
    scanf("%d", &id);
    for(ind = 0;ind<*n;ind++)
    {
        if(veh[ind].id == id)
        {
            printf("ID already exists, you can't proceed\n");
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        veh[*n].id = id;
        fetch_Model(*n);
        fetch_Tank(*n);
        fetch_Seat(*n);
        fetch_Engine(*n);
        (*n)++;
        printf("Vehicle added in list\n");
    }
}
// Function to delete a vehicle based on ID
void del_Vehicle(int *n)
{
    int id,ind,jnd,found = 0;
    printf("Enter the ID to delete:");
    scanf("%d",&id);
    for(ind =0;ind<*n;ind++)
    {
        if (veh[ind].id == id)
        {
            found = 1;
            for(jnd = ind;jnd<*n -1;jnd++)
            {
                veh[jnd] =veh[jnd + 1];
            }
            (*n)--;
            printf("Vehicle with ID %d deleted successfully!\n", id);
            break;
        }
    }
    if(!found)
    {
        printf("No vehicle found with ID %d\n", id);
    }
}
// Function to display all vehicles
void disp_Vehicle(int n)
{
    int ind;
    if(n==0)
    {
        printf("No vehicles stored.\n");
        return;
    }
    printf("\nList of all vehicles:\n");
    for(ind = 0; ind < n; ind++)
    {
        printf("ID: %d \t Model: %s \t Tank: %d \t Seats: %d \t Engine: %d\n", veh[ind].id, veh[ind].model, veh[ind].fuel, veh[ind].seat, veh[ind].eng);
    }
}