#include <stdio.h>

int main()
{
    char string[100];
    printf("Enter a integer\n");
    fgets(string,100,stdin);
int num;
num = atoi(string);
    printf("You entered, %d", num );
    printf("\n");
    return 0;
}

