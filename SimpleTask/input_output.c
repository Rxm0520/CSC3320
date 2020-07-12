#include <stdio.h>

int main() 
{
    char string[100];
    printf("Enter a string\n");
    fgets(string,100,stdin);
    printf("You entered, %s", string);
    return 0;
}
