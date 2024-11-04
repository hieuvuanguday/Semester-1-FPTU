#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);
	if(a > b) a = a + b - (b =a);
 	int i, gcd;
	for(i = 2; i <= a; i++){
		if(a % i == 0){
			if(b % i == 0){
				gcd = i;
			}
		}
	}
	printf("Greatest Common Divisor of a and b is : %d", gcd);
	
	return 0;
}
