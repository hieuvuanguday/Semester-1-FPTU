#include <stdio.h>
#include <math.h>
int findGCD(int a, int b);

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	a = a + b - (b = a);
	printf("%d %d", a ,b);
	//printf("GCD: %d", findGCD(a, b));
	
	return 0;
}
int findGCD(int a, int b){
	while(a != b){
		if(a > b) a-= b;
		else b -= a;
	}
	return a;
}

