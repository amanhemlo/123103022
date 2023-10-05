
#include<stdio.h>

int main(){

	int num1,num2;

	printf("ENTER FIRST NUMBER : ");

	scanf("%d",&num1);

	printf("ENTER SECOND NUMBER : ");

	scanf("%d",&num2);

	if(num1==num2){

		printf("BOTH NUMBERS ARE EQUAL\n");

		printf("ENTER DIFFERENT NUMBERS");

	}

	if(num1>num2){

		printf("THE SUM OF TWO NUMBERS IS : %d",num1+num2);

	}

	if(num1<num2){

		printf("THE DIFFERENCE OF TWO NUMBERS IS : %d",num2-num1);

	}

	return 0;

}
