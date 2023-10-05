#include<stdio.h>

int main(){

	int n,i;

	printf("ENTER VALUE OF N : ");

	scanf("%d",&n);

	// SERIES 1 = 1 + 5 + 10 + 15 + ....  UPTO N

	int a=1;                                          // AFTER 1 SERIES IS AN AP SO IT IS TAKEN OUT                          

	for(i=5;i<=n;i=i+5){                             // FIRST 5 IS ADDED THEN 10 UPTO N SO INCREEMENT IN I IS BY 5

		a=a+i;                                      // COMMON DIFFERENCE IS 5  

	}                                               

	printf("THE SOLUTION OF SERIES IS : %d",a); 

	return 0;

}
