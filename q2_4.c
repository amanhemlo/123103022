#include <stdio.h>

int main(){

    int a, b, c;                                   // THREE DISTINCT NUMBERS

    printf("Enter 1st number : ");

    scanf("%d", &a);

    printf("Enter 2nd number : ");

    scanf("%d", &b);

    printf("Enter 3rd number : ");

    scanf("%d", &c);



    if (a > b){

        if (a > c){

            printf("1ST NUMBER IS LARGEST\n");    //  B IS OUT SO CHECK BETWEEN A AND C WHICH IS LARGEST

        }

        else{

            printf("3RD NUMBER IS LARGEST\n");    // A CAN NOT BE SMALLEST SO CHECK BETWEEN B AND C WHICH IS SMALLEST

        }

        if (b > c){

            printf("3RD NUMBER IS SMALLEST");

        }

        else{

            printf("2ND NUMBER IS SMALLEST");

        }

    }



    else{

        if (b > c){

            printf("2ND NUMBER IS LARGEST\n");     // A IS OUT SO CHECK BETWEEN B AND C WHICH IS LARGEST

        }

        else{

            printf("3RD NUMBER IS LARGEST\n");    // B CANNOT BE SMALLEST SO CHECK BETWEEN A AND C WHICH IS SMALLEST

        }

        if (a > c){

            printf("3RD NUMBER IS SMALLEST");

        }

        else{

            printf("1ST NUMBER IS SMALLEST");

        }

    }

    return 0;

}
