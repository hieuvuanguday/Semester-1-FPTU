#include <stdio.h>
#include <math.h>
int checkPrime(int a);
int countPrimeInArr(int arr[], int n);
void scanArr(int arr[], int* n);
int main(){
	int n, arr[1000];
	scanArr(arr, &n);
	printf("%d", countPrimeInArr(arr, n));
	
	return 0;
}
int countPrimeInArr(int arr[], int n){
	int i, count = 0;
	for(i = 0; i <= n - 1; i++){
		if(checkPrime(arr[i]) == 1){
			count++;
		}
	}
	return count;
}
void scanArr(int arr[], int* n){
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++){
		printf("Arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
int checkPrime(int a){
	if(a < 2){
		return 0;
	}else if(a == 2){
		return 1;
	}else{
		int i;
		for(i = 2; i <= sqrt(a); i++){
			if(a % i == 0){
				return 0;
			}
		}
		return 1;
	}
}




