#include <stdio.h>

int main() 
{
    char str[100];
    int ind = 0;
    printf("Enter a string: ");
    scanf(" %s",str); 
    while (str[ind] != '\0') 
    {
        if(str[ind] == 'a' || str[ind] == 'e' || str[ind] == 'i' || str[ind] == 'o' || str[ind] == 'u') 
        {
            str[ind] = str[ind] - 32; 
        }
        else if(str[ind] == 'A' || str[ind] == 'E' || str[ind] == 'I' || str[ind] == 'O' || str[ind] == 'U') 
        {
            str[ind] = str[ind] + 32; 
        }
        ind++;
    }
    printf("Modified string: %s", str);
}
