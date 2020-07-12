#include <stdio.h>
	int main(){
		int maxP = 0;
		int temp = 0;
		int product = 0;
		int i = 0;
		int j = 0;
		int remain = 0;
		for (i = 0; i < 100; i++) {
			for (j = 0; j < 100; j++) {
				int num = 0;
				product = i * j;
				temp = product;
				while (product > 0) {
					remain = product % 10;
					   num = (num * 10) + remain;
					product = product / 10;
				}
				if (temp == num) {
					if (temp > maxP) {
						maxP = temp;
					}
				}
			}
		}
		printf("%d", maxP);
	        printf("\n");
return 0;
	}

