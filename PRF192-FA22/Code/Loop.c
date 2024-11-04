#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	float sum = 0;
	int i;
	for(i = 1; i <= n; i++){
		sum = sum + ((float)1)/i;
	}
	printf("%.2f", sum);

	return 0;
}