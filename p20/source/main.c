#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
	int a;
	srand(time(NULL));
	for (int i = 1; i <= 20; i++){
		printf("%10d", 1 + rand() % 6);
	}
	printf("\n");
	system("pause");
}