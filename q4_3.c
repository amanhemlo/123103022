#include<stdio.h>

#include<math.h>

float factorial(float r){

	float f=1;

	float j;

	for(j=1;j<=r;j=j+1){

		f=f*j;

	}

	return f;

}

int main(){

	float x,n,i,z;

	printf("ENTER VALUE OF X : ");

	scanf("%f",&x);

	printf("ENTER VALUE OF n : ");

	scanf("%f",&n);

	float sum = 0;

	int y=1;

	for(i=1;i<=n;i=i+2){

		z=pow(x,i)/factorial(i);

		if(y%2!=0){

			sum=sum+z;

			y++;

		}

		else{

			sum=sum-z;

			y++;

		}

	}

	printf("SUM OF SERIES IS : %f",sum);

	return 0;

}
