#include<stdio.h>
#include<stdlib.h>
long int f(int);
main(){
	for (int i = 1; i <= 10; i++){
		printf("%d!=%ld\n", i, f(i));
	}
	system("pause");
}
long int f(int x){
	long int a=1;
	for (int j = 1; j <= x; j++){
		a = a*j;
	}
	return a;
}