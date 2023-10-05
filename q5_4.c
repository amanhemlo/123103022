
        #include<stdio.h>

void date(int d,int m,int y){

	

	printf("%d",d);

	switch(d){

		case 1:

		case 21:

		case 31:

			printf("st, ");

			break;

		case 2:

		case 22:

		    printf("nd, ");

	        break;

		case 3:

		case 23:

		    printf("rd, ");

			break;

		default:

		    printf("th, ");

			break;	

	}

	

	switch(m){

		case 1:

			printf("Jan, ");

			break;

		case 2:

			printf("Feb, ");

			break;

		case 3:

			printf("Mar, ");

			break;

		case 4:

			printf("Apr, ");

			break;

		case 5:

			printf("May, ");

			break;

		case 6:

			printf("Jun, ");

			break;

		case 7:

			printf("Jul, ");

			break;

		case 8:

			printf("Aug, ");

			break;

		case 9:

			printf("Sep, ");

			break;

		case 10:

			printf("Oct, ");

			break;

		case 11:

			printf("Nov, ");

			break;

		case 12:

			printf("Dec, ");

			break;

		default:

			printf("INVALID MONTH, ");

			break;

	}

	

	printf("%d",y);

}



int leap_year(int y){

	if(y%400==0 || (y%4==0 && y%100!=0)){

		return 1;

	}

	else{

		return 0;

	}

}



int month_days(int m,int y){

	int leapyear=leap_year(y);

	if(leapyear==1 && m==2){

		return 29;

	}

	else if(m==2){

		return 28;

	}

	else if(m%2==0 && m!=8){

		return 30;

	}

	else{

		return 31;

	}

}



int main(){

	

	int day,month,year;

	printf("ENTER DAY : ");

	scanf("%d",&day);

	printf("ENTER month : ");

	scanf("%d",&month);

	printf("ENTER year : ");

	scanf("%d",&year);

	

	int add;

	printf("ENTER THE NUMBER OF DAYS TO BE ADDED : ");

	scanf("%d",&add);

	while(add>0){

		day++;

		if(day>month_days(month,year)){

			day=1;

			month++;

		}

		if(month>12){

			month=1;

			year++;

		}

		add--;

	}

	printf("NEW DATE IS : ");

	date(day,month,year);

	

	return 0;

}
