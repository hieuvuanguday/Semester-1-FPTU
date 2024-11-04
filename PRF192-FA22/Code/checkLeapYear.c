#include <stdio.h>
#include <math.h>

int main (){
	int month, year;
	scanf("%d%d", &month, &year);
	//checkLeapYear
	if(((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
		printf("%d is Leap year", year);
	}else{
		printf("%d is not Leap year", year);
	}
	//checkManyDayInMonth
	if(month >= 0 && month <= 12){
		if(month == 2){
			if(((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
				printf("\n29");
			}else{
				printf("\n28");
			}
		}else if(month <= 7){
			month % 2 == 1 ? printf("\n31") : printf("\n30");
		}else{
			month % 2 == 1 ? printf("\n30") : printf("\n31");
		}
	}

	return 0;
}