#include <stdio.h>
#include <math.h>

int main(){
	int s;
	float total;
	scanf("%d", &s);
	if(s > 0){
		if(s <= 1){
			total = 15000;
		}else if(s > 1 && s <=5){
			total = 15000 + (s-1)*13500;
		}else if(s > 5 && s <= 120){
			total = 15000 + 4*13500 + (s-5)*11000;
		}else if(s > 120){
			total = ((float)(15000 + 4*13500 + (s-5)*11000)) * 90 /100;
		}
		printf("Fee you have to pay: %.2f", total);
	}

	
	return 0;
}