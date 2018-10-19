#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int roll(void);
enum status{ win, lose, Continue };
main(){
	int sum;
	int mypoint;
	enum status gamestatus;
	srand(time(NULL));
	sum = roll();
	switch (sum){
	case 7:
	case 11:
		gamestatus = win;
		break;
	case 2:
	case 3:
	case 12:
		gamestatus = lose;
		break;
	default:
		gamestatus = Continue;
		mypoint = sum;
		printf("== my point is %d ==\n", mypoint);
		break;
	}
	while (gamestatus == Continue){
			sum = roll();
			if (sum == mypoint){
				gamestatus = win;
			}
			else if (sum == 7){
				gamestatus = lose;
			}
		}
		if (gamestatus == win)
			printf("** you win **\n");
		else
			printf("** you lose **\n");
	system("pause");
}
int roll(void){
	int sum1;
	int d1, d2;
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	sum1 = d1 + d2;
	printf("the point you roll are %d , %d\nthe sum of your point %d\n", d1, d2, sum1);
	return sum1;
}
