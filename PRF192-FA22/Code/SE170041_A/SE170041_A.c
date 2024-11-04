#include <stdio.h>
#include <math.h>
int findLongestSubArr(int arr[], int size);
int howManyNumIsBigger(int arr[], int size, int k);
void inputArr(int arr[], int size);
int isPrime(int g);
void transToMulPrime(int n);

int main(){
	//Problem 1:
	printf("Problem 1: \n");
	int n;
	scanf("%d", &n);
	transToMulPrime(n);
	
	//Problem 2:
	printf("\nProblem 2: \n");
	int size, k;
	scanf("%d", &size);
	int arr[size];
	inputArr(arr, size);
	scanf("%d", &k);
	printf("%d", howManyNumIsBigger(arr, size, k));
		
	//Problem 3:
	printf("\nProblem 3: \n");	
	int size2;
	scanf("%d", &size2);
	int arr2[size2];
	inputArr(arr2, size2);
	printf("%d", findLongestSubArr(arr2, size2));
	
	return 0;
}

void transToMulPrime(int n){
	if(isPrime(n) == 1){
		printf("1 %d", n);
	}else{
		int i;
		for(i = 2; i <= n; i++){
			if(isPrime(i) == 1){
				while(n % i == 0){
					printf("%d ", i);
					n /= i;
				}
			}
		}
	}
}

int isPrime(int g){
	if(g < 2){
		return 0;
	}else if(g == 2){
		return 1;
	}else{
		int i, flag = 1;
		for(i = 2; i <= sqrt(g); i++){
			if(g % i == 0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			return 1;
		}else{
			return 0;
		}
	}
}

void inputArr(int arr[], int size){
	int i;
	for(i = 0; i <= size - 1; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}

int howManyNumIsBigger(int arr[], int size, int k){
	int i, count = 0;
	for(i = 0; i <= size - 1; i++){
		if(k < arr[i])
			count++;
	}
	return count;
}

int findLongestSubArr(int arr[], int size){
	int checkLast = 1;
	int i, j, iTmp;
	for(i = 0; i <= size - 1; i++){
		int checkTmp = 1;
		iTmp = i;
		for(j = i + 1; i <= size - 1; j++){
			if(arr[j] > arr[iTmp]){
				checkTmp++;
				iTmp++;	
			}else{
				break;
			}
		}
		if(checkTmp > checkLast){
			checkLast = checkTmp;
		}
	}
	
	return checkLast;
}
















