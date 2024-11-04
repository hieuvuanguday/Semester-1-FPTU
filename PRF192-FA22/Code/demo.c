#include <stdio.h>
#include <math.h>
void inputArr(int arr[], int n);
void printArr(int arr[], int n);
void sortSelection(int arr[], int n);
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	inputArr(arr, n);
	printArr(arr, n);
	sortSelection(arr, n);
	printf("\n");
	printArr(arr, n);
	
	return 0;
}

void inputArr(int arr[], int n){
	int i;
	for(i = 0; i <= n - 1; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}

void printArr(int arr[], int n){
	int i;
	for(i = 0; i <= n - 1; i++){
		printf("%d ", arr[i]);
	}
}

void sortSelection(int arr[], int n){
	int dem, min = arr[0];
	int i, indexMin;
	for(dem = 0; dem <= n - 2; dem++){
		for(i = dem + 1; i <= n - 1; i++){
			if(min > arr[i]){
				min = arr[i];
				indexMin = i;
			}
		}
		arr[dem] = arr[dem] + arr[indexMin] - (arr[indexMin] = arr[dem]);
	}
}









