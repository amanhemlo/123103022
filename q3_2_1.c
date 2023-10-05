#include<stdio.h>

int main(){

	int n,i;

	printf("ENTER VALUE OF N : ");

	scanf("%d",&n);

	// SERIES 1 = 1 + 5 + 10 + 15 + ....  UPTO N TERMS

	int a=1;                                          // AFTER 1 SERIES IS AN AP SO IT IS TAKEN OUT                          

	for(i=1;i<n;i++){                             

		a=a+5*i;                                      // COMMON DIFFERENCE IS 5  

	}                                                 // SERIES GOES UPTO N-1 AS 1 IS INCLUDED ABOVE

	printf("THE SOLUTION OF SERIES IS : %d",a); 

	return 0;

}
