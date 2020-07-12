#include <stdio.h>
#include <string.h>


int wordToNum(char *n){
        int num;
        if(strcmp(n,"zero") == 0){
                  num =0;
        }
        if(strcmp(n,"one") == 0){
                  num =1;
        }
        if(strcmp(n,"two") == 0){
                  num =2;
        }
        if(strcmp(n,"three") == 0){
                  num =3;
        }
        if(strcmp(n,"four") == 0){
                  num =4;
        }
        if(strcmp(n,"five") == 0){
                  num =5;
        }
        if(strcmp(n,"six") == 0){
                  num =6;
        }
        if(strcmp(n,"seven") == 0){
                  num =7;
        }
        if(strcmp(n,"eight") == 0){
                  num =8;
        }
        if(strcmp(n,"nine") == 0){
                  num =9;
        }
        if(strcmp(n,"ten") == 0){
                  num =10;
        }
        if(strcmp(n,"eleven") == 0){
                  num =11;
        }
        if(strcmp(n,"twelve") == 0){
                  num =12;
        }
        if(strcmp(n,"thirteen") == 0){
                  num =13;
        }
        if(strcmp(n,"fourteen") == 0){
                  num =14;
        }
        if(strcmp(n,"fifteen") == 0){
                  num =15;
        }
        if(strcmp(n,"sixteen") == 0){
                  num =16;
        }
        if(strcmp(n,"seventeen") == 0){
                  num =17;
        }
        if(strcmp(n,"eighteen") == 0){
                  num =18;
        }
        if(strcmp(n,"nineteen") == 0){
                  num =19;
        }
        if(strcmp(n,"twenty") == 0){
                  num =20;
        }
        if(strcmp(n,"thirty") == 0){
                  num =30;
        }
        if(strcmp(n,"forty") == 0){
                  num =40;
        }
        if(strcmp(n,"fifty") == 0){
                  num =50;
        }
        if(strcmp(n,"sixty") == 0){
                  num =60;
        }
        if(strcmp(n,"seventy") == 0){
                  num =70;
        }
        if(strcmp(n,"eighty") == 0){
                  num =80;
        }
        if(strcmp(n,"ninety") == 0){
                  num =90;
        }
        return num;
}
      


int main (){

        char string[100];
        printf("Enter two integer under 100 in words to be mulitiple\n");
        fgets(string,100,stdin);
	strtok(string,"\n");
        int i = 0;
        char *split = strtok(string," ");
        char *array[100];

        while(split !=NULL){
                array[i] = split + '\0';
                split = strtok(NULL," ");
                i++;
                }
        char *fnum = array[0];
        char *snum = array[1];

   	 printf("%s\n", fnum);
   	 printf("%s\n", snum);


	int firstnum;

        int flength = strlen(fnum);
        int j;
        int fdash;

        for(j = 0; j < flength; j++){
                if(fnum[j]=='-'){
                        fdash = j;
                        break;
                }else{
                        fdash = -1;
                }
        }

        if(fdash == -1){
        	firstnum = wordToNum(fnum);
        }else if(fdash != -1){
        int k = 0;
        char *fsplit = strtok(fnum,"-");
        char *farray[2];
      
	  while(fsplit !=NULL){
               farray[k]=fsplit;
                fsplit = strtok(NULL,"-");
                k++;
                } 
      
        int ftens = wordToNum(farray[0]);
        int fones = wordToNum(farray[1]);
        firstnum = ftens + fones;
        }



        int secnum;
        int slength = strlen(snum);
	int m;
        int sdash;

	
        for(m = 0; m < slength; m++){
                if(snum[m]=='-'){
                        sdash = m;
                        break;
                }else{
                        sdash = -1;
                }
        }

        if(sdash == -1){        
        secnum = wordToNum(snum);
        }else if(sdash != -1){
        int n = 0;
        char *ssplit = strtok(snum,"-");
        char *sarray[2];

          while(ssplit !=NULL){
               sarray[n]=ssplit;
                ssplit = strtok(NULL,"-");
                n++;
                }

        int stens = wordToNum(sarray[0]);
        int sones = wordToNum(sarray[1]);
        secnum = stens + sones;

        }
	int product = firstnum *secnum;

	printf("%s", fnum);
	printf(" * %s", snum); 
	printf("\n");
	printf("%d", firstnum );
        printf(" * %d", secnum);
	printf(" = %d",product);
	printf("\n");



return 0;
}
          
