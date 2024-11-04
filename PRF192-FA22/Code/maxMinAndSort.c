#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float max = a;
	if(max <= b) max = b;
	if(max <= c) max = c;
	float min = a;
	if(min >= b) min = b;
	if(min >= c) min = c;
	printf("\nMax number = %.2f", max);
	printf("\nMin number = %.2f", min);
	//Sort
	float arr[3];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	for(int i = 0; i <= 2; i++){
		for(int h = i + 1; h <= 2; h++){
			if(arr[i] > arr[h]){
				arr[i] = arr[i] + arr[h];
				arr[h]= arr[i] - arr[h];
				arr[i]= arr[i] - arr[h];		
			}
		}
	}
	printf("\nSort ASC: ");
	for(int j = 0; j <= 2; j++){
		printf("%.2f   ", arr[j]);
	}
	
	return 0;
}
