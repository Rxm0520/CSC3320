#include <stdio.h>
#include <string.h>

int main()
{
	char string[3];
	printf("Enter a integer under 100\n");
	scanf("%s", string);
	int length = strlen(string);
	
	if(length == 1){
	char ones = string[0];
		numToWord(ones);
	}
	if(length == 2){
	char tens = string[0];
	char ones = string[1];
		if(tens == '1'){
			if(ones == '0'){
				printf("ten");
				}
			if(ones == '1'){	
				 printf("eleven");
                                }
                        if(ones == '2'){  
				 printf("twelve");
                                }
                        if(ones == '3'){  
                                 printf("thirteen");
                                }
                        if(ones == '4'){  
                                 printf("fourteen");
                                }
                        if(ones == '5'){ 
                                 printf("fifteen");
                                }
                        if(ones == '6'){  
                                 printf("sixteen");
                                }
                        if(ones == '7'){  
                                 printf("seventeen");
                                }
                        if(ones == '8'){  
                                 printf("eighteen");
                                }
                        if(ones == '9'){  
                                 printf("nineteen");
                                }
		printf("\n");
		}
		if(tens == '2'){
			if(ones == '0'){
				printf("twenty\n");
			}else{
				printf("twenty-");
				numToWord(ones);			
		}
	}
                if(tens == '3'){
                        if(ones == '0'){
                                printf("thirty\n");
                        }else{
                                printf("thirty-");
                                numToWord(ones);
                }
	}
                if(tens == '4'){
                        if(ones == '0'){
                                printf("forty\n");
                        }else{
                                printf("forty-");
                                numToWord(ones);               
		}
	 }
                if(tens == '5'){
                        if(ones == '0'){
                                printf("fifty\n");
                        }else{
                                printf("fifity-");
                                numToWord(ones);
                }
	}
                if(tens == '6'){
                        if(ones == '0'){
                                printf("sixty\n");
                        }else{
                                printf("sixty-");
                                numToWord(ones);
		}
        }
                if(tens == '7'){
                        if(ones == '0'){
                                printf("seventy\n");
                        }else{
                                printf("seventy-");
                                numToWord(ones);
	        }
        }
                if(tens == '8'){
                        if(ones == '0'){
                                printf("eighty\n");
                        }else{
                                printf("eighty-");
                                numToWord(ones);
         	       }
		}
                if(tens == '9'){
                        if(ones == '0'){
                                printf("ninty\n");
                        }else{
                                printf("ninty-");
                                numToWord(ones);
        		        }
			}

		}
	if(length > 2){
	printf("Number is not under 100\n");
	}
return 0;
}

void numToWord(char n){
        if(n == '0'){
                printf("zero");
        }
        if(n == '1'){
                printf("one");
        }
        if(n == '2'){
                printf("two");
        }
        if(n == '3'){
                printf("three");
        }
        if(n == '4'){
                printf("four");
        }
        if(n == '5'){
                printf("five");
        }
        if(n == '6'){
                printf("six");
        }
        if(n == '7'){
                printf("sven");
        }
        if(n == '8'){
                printf("eight");
        }
        if(n == '9'){
                printf("nine");
        }
        printf("\n");

return 0;
}


