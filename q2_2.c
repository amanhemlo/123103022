
#include<stdio.h>

int main(){

	int a,b,c;

	printf("ENTER FIRST NUMBER : ");

	scanf("%d",&a);

	printf("ENTER SECOND NUMBER : ");    // THREE DISTINCT NUMBER

	scanf("%d",&b);

	printf("ENTER THIRD NUMBER : ");

	scanf("%d",&c);

	

//	if(a>b && a>c){

//		printf("1st NUMBER IS LARGEST");

//	}

//	if(b>c && b>a){

//		printf("2nd NUMBER IS LARGEST");

//	}

//	else{

//		printf("3rd NUMBER IS LARGEST");

//	}



// IMPROVED CODE WITH IF AND ELSE STATEMENT ONLY



    if(a>b){

    	if(a>c){

    		printf("1st NUMBER IS LARGEST");      //IF WE ENTER IN THIS STATEMENT MEANS B IS OUT OF RACE

		}                                         //NOW WE HAVE TO CHECK FOR A AND C ONLY 

		else{

			printf("3rd NUMBER IS LARGEST");

		}

	}



    else{

    	if(b>c){

    		printf("2nd NUMBER IS LARGEST");     //IF WE COME TO THIS STATEMENT MEANS A IS SMALLER THAN B

		}                                        //NOW WE HAVE TO CHECK FOR B AND C ONLY

		else{

			printf("3rd NUMBER IS LARGEST");

		}

	}

	return 0;

}
