#include<stdio.h>

void calculator(int num1,int num2){

	printf("SUM OF TWO NUMBER IS : %d\n",num1+num2);

	printf("DIFFERENCE OF TWO NUMBER IS : %d\n",num1-num2);

	printf("PRODUCT OF TWO NUMBER IS : %d\n",num1*num2);

	return;

}

int main(){

	int a,b;

	printf("ENTER FIRST NUMBER : ");

	scanf("%d",&a);

	printf("ENTER SECOND NUMBER : ");

	scanf("%d",&b);

	calculator(a,b);

	return 0;

}
