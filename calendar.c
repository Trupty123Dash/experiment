#include<stdio.h>
int main(){
	int year,month,daysInMonth,startingDay,dayOfWeek;
	int day,i;
	
	//input year and month
	printf("Enter year: ");
	scanf("%d",&year);
	printf("Enter month(1-12): ");
	scanf("%d",&month);
	
	//Calculate the number of days in month
	if(month==2){
		if((year%4==0 && year%100!=0) || (year%400==0))
		daysInMonth=29;
	    else{
		daysInMonth=28;
	     }
	}else if(month==4||month==6||month==9||month==11){
		daysInMonth=30;
	}else{
		daysInMonth=31;
	}
	//calculate the starting days of month
	startingDay=(year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400;
	for(i=1;i<month;++i){
		if(i==2){
			if((year%4==0 && year%100!=0)||(year%400==0)){
				startingDay+=29;
			}
			else{
				startingDay+=28;
			}
		}
		else if(i==4||i==6||i==9||i==11){
			startingDay+=30;
		}else{
			startingDay+=31;
		}
	}
	dayOfWeek=(startingDay+1)%7;
	//incrementing the starting day by 1
	//Display the calenar
	printf("\n=============================\n");
	printf("   %d-%02d\n " , year , month );
	printf("=============================\n");
	printf(" Sun Mon Tue Wed Thu Fri Sat\n ");
	
//print spaces for the days before the starting day of the month 
for(i=0; i<dayOfWeek; ++i){
	printf("  ");
}
//print the days of the month
for ( day=1;day<=daysInMonth;++day){
	printf("%4d",day);
	
	if((day+dayOfWeek)%7==0){
		printf("\n");
	}
}
printf("\n");
return 0;
	}

