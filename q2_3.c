#include<stdio.h>

#include<math.h>

int main(){

	int a,b,c,A,B,b2;

	printf("FILL THE FOLLOWING QUADRATIC EQUATION AS YOU WANT __X*X+__X+__\n");

	scanf("%d %d %d",&a,&b,&c);

	float x;

	b2=pow(b,2);

	x=sqrt(b2-4*a*c);

	A= (-b+x)/(2*a);

	B=(-b-x)/(2*a);

	if(b2<4*a*c){

		int y= 4*a*c-b2;

		

		printf("roots are -%d+root(%di)/%d ",b,y,2*a);

		printf("and -%d-root(%di)/%d",b,y,2*a);

	}

	else {

	    printf("roots are %d and %d",A,B);

	}

}
