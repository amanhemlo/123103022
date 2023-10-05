#include<stdio.h>

int main(){

	int n;

	printf("ENTER NUMBER : ");

	scanf("%d",&n);

	int sum=0;

	do{

		sum=sum+n%10;              // ADDING REMAINDER EACH TIME (last digit adding)

		n=n/10;                    // DIVIDING CODE BY 10 TO ADD NEXT DIGIT (removing last digit)

	}while(n>0);                   // LOOP WORK UNTIL N IS GEATER THAN 0 LOOP TERMINATES AT N=0

	printf("THE SUM OF DIGITS OF GIVEN NUMBER IS : %d",sum);

	return 0;

}
