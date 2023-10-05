#include<stdio.h>

void convert(int num){

	char *units[]={"","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};

	char *teens[]={"","ELEVEN","TWELVE","THIRETEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETEEN"};

	char *tens[]={"","TEN","TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};

	if(num>=1000){

		printf("%s THOUSAND ",units[num/1000]);

		num=num%1000;

	}

	if(num>=100){

		printf("%s HUNDRED ",units[num/100]);

		num=num%100;

	}

	if(num>=20){

		printf("%s ",tens[num/10]);

		num=num%10;

	}

	else if(num>=11){

		printf("%s",teens[num-10]);

		return;

	}

	if(num>0){

		printf("%s ",units[num]);

	}

}

int main(){

	int n;

	printf("ENTER NUMBER UPTO 4 DIGITS : ");

	scanf("%d",&n);

	convert(n);

	return 0;

}
