#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int a;
	unsigned seed;
	printf("enter seed :");
	scanf_s("%d", &seed);
	srand(seed);
	for (int i = 1; i <= 10; i++){
		printf("%10d", 1 + rand() % 6);
	}
	printf("\n");
	system("pause");
}