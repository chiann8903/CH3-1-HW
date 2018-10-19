#include<stdio.h>
#include<stdlib.h>
int sq(int y);
main(){
	for (int x = 1; x <= 10; x++){
		printf("%d ", sq(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
int sq(int y){
	return y*y;
}