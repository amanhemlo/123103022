#include<stdio.h>

int main(){

	int n,i,j;

	printf("ENTER NUMBER : ");

	scanf("%d",&n);

	if(n==0){

		printf("FACTORIAL OF %d is : %d",n,1);

	}

	else if(n>0){

		int fp=1;

		for(i=1;i<=n;i++){

			fp=fp*i;

		}

		printf("FACTORIAL OF %d is : %d",n,fp);

	}

	else{

		int fn=1;

		for(j=n;j<=(-1);j++){                             // LOOP RUN IN OPPOSITE DIRECTION 

			fn=fn*j;                                      // LOOP RUN FROM N TO -1 AS N IS NEGATIVE 

		}

		printf("FACTORIAL OF %d is : %d",n,fn);

	}

	return 0;

}
