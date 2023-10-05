#include<stdio.h>

int main(){

	int n,i;

	printf("ENTER NUMBER : ");

	scanf("%d",&n);

	int a=0;

	for(i=2;i<=n-1;i++){                 // check divisibility of number 

		if(n%i==0){

			a=1;

			break;                        // exit the loop

		}

	}

	if(n==0 || n==1){                       // 0 and 1 can not be determined

		printf("CAN NOT BE DETERMINED");

	}

	else if(a==0){                                  // not divisible by any other so prime

		printf(" GIVEN NUMBER IS A PRIME NUMBER");

	}

	else{

		printf("GIVEN NUMBER IS A COMPOSITE NUMBER");

	}

	return 0;

}
