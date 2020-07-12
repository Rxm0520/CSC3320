#include <stdio.h>
#include <string.h>

int main()
{
        char string[50];
        printf("Enter a integer under 100 in word\n");
        scanf("%s", string);
	int length = strlen(string);
	int i;
	int dash;
	for(i = 0; i < length;i++){
		if(string[i]=='-'){
			dash = i;
			break;
		}else{
			dash = -1;
		} 
	}
	
	if(dash == -1){
	int num = wordToNum(string);
		printf("%d",num);	
	}else if(dash != -1){
	int i = 0;
	char *split = strtok(string,"-");
	char *array[2];
	
	while(split !=NULL){
		array[i]=split;
		split = strtok(NULL,"-");
		i++;
		}	
	int tens = wordToNum(array[0]);
	int ones = wordToNum(array[1]);
	int sum = tens + ones;
	printf("%d",sum);

	}

	printf("\n");
	return 0;
}

int  wordToNum(char *n){
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
