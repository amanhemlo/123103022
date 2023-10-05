 #include<stdio.h>

int main(){

	int a,b,c,d;

	printf("ENTER FIRST NUMBER : ");

	scanf("%d",&a);

	printf("ENTER SECOND NUMBER : ");    // FOUR DISTINCT NUMBER

	scanf("%d",&b);

	printf("ENTER THIRD NUMBER : ");

	scanf("%d",&c);

	printf("ENTER FOURTH NUMBER : ");

	scanf("%d",&d);

	

	if(a>b){

		if(a>c){

			if(a>d){

				printf("1st NUMBER IS LARGEST");

			}

		}

	}

	else if(b>c){

		if(b>d){

			if(b>a){

				printf("2nd NUMBER IS LARGEST");

			}

		}

	}

	else if(c>d){

		if(c>a){

			if(c>b){

				printf("3rd NUMBER IS LARGEST");

			}

		}

	}

	else{

		printf("4th NUMBER IS LARGEST");

	}

	return 0;

}
