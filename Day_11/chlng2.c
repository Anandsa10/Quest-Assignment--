#include <stdio.h>
struct Theatre 
{
    int total;
    int res;
    int avl;
};
int main() 
{
    struct Theatre theatre;
    theatre.total = 100;
    printf("Enter the number of reserved seats: ");
    scanf("%d", &theatre.res);
    theatre.avl = theatre.total - theatre.res;
    printf("Total seats: %d\n", theatre.total);
    printf("Reserved seats: %d\n", theatre.res);
    printf("Available seats: %d\n", theatre.avl);
}
