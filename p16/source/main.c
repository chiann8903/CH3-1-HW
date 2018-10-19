#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float a;
	for (int i = 1; i <= 10; i++){
		a = sqrt(i);
		printf("%.2f ", a);
	}
	printf("\n");
	system("pause");
}