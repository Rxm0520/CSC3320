#include <stdio.h>
#include <string.h>
int main (){

        char string[100];
        printf("Enter two integer under 100 in words to be mulitiple\n");
        fgets(string,100,stdin);
        int i = 0;
        char *split = strtok(string," ");
        char *array[2];

        while(split !=NULL){
                array[i]=split;
                split = strtok(NULL," ");
                i++;
                }
        char *fnum = array[0];
        char *snum = array[1];

    printf("%s\n", fnum);
    printf("%s\n", snum);
return 0;
}

