#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char string1[60] = "Welcome";
	char string2[60];
	int l;
	l = strlen(string1);
	printf("string2=%s\nthe length of string2 is %d\n", string1, l);
	system("pause");
}