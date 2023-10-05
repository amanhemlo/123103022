#include<stdio.h>

void interest(float amount,float rate,float time){

	printf("YOUR SIMPLE INTERSET WILL BE : %f\n",(amount*rate*time)/100);

	return;

}

int main(){

	float a, b, c;

    printf("Enter principle value : ");

    scanf("%f", &a);

    printf("Enter time : ");

    scanf("%f", &b);

    printf("Enter rate : ");

    scanf("%f", &c);

    interest(a, b, c);



    return 0;

}
