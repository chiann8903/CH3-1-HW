#include<stdio.h.>
#include<stdlib.h>
double pow(double,int);
main(){
	int k;
	double a;
	printf("calculate kth power of 3.5:");
	scanf_s("%d",&k);
	a = pow(3.5,k);
	printf("%dth power of 3.5 is %lf\n",k ,a);
	system("pause");
	return 0;
}
double pow(double x, int n){
	double b =1 ;
	for (int i = 1; i <= n; i++){
		b = b*x;
	}
	return b;
}