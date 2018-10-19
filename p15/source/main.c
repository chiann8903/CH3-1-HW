#include<stdio.h>
#include<stdlib.h>
int m(int, int, int);
main(){
	int ans;
	int a, b, c;
	printf("input 3 numbers:");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("the biggest number is %d\n", m(a,b,c));
	system("pause");
	return 0;
}
int m(int x, int y, int z){
	int ans;
	if (x > z&&x > y)
		ans = x;
	else if (y > x&&y > z)
		ans = y;
	else
		ans = z;
	return ans;
}