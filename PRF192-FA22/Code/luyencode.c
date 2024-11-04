#include <stdio.h>
#include <math.h>
void inputArr(int arr, int n);

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	if(n < 2){
		printf("NOT FOUND");
	}else{
		inputArr(arr, n);
		int max1 = arr[0]; 
		int max2 = arr[1];
		if(max1 < max2) 
		
	}
	
    return 0;
}
void inputArr(int arr, int n){
	int i;
	for(i = 0; i <= n - 1; i++){
		scanf("%d", arr[i]);
	}
}
