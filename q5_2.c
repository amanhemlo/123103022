#include<stdio.h>

int main(){

	float ans=0;

	char operator;

	float n;

	while(1){

		printf("CURRENT ANSWER : %f\n",ans);

		printf("ENTER OPERATOR, NUMBER, OR,'C' TO CLEAR, 'E' TO EXIT : \n");

		scanf("%c",&operator);

		

		if(operator=='E'){

			break;

		}

		else if(operator=='c'){

			ans=0;

		}

		else{

			scanf("%f",&n);

			switch(operator){

				case '+':

					ans=ans+n;

					break;

				case '-':

					ans=ans-n;

					break;

				case '*':

					ans=ans*n;

					break;

				case '/':

					ans=ans/n;

					break;

				default:

					printf("enter operator\n");

					break;

					

			}

		}

	}

	printf("FINAL ANSWER IS : %f",ans);

	return 0;

}
