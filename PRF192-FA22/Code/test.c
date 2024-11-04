#include<stdio.h>
#include<math.h>
void inputArr(int arr[]);
void printTwoDigitMostAppear(int arr[]);
void delArr(int arr[], int pos, int* size);
void sortDCS(int arr[], int size);
void swap(int* a; int* b);
int main(){
	int arr[7];
	inputArr(arr);
	
	
	return 0;
}

void inputArr(int arr[]){
	int i;
	for(i = 0; i <= 6; i++){
		printf("Arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
void printTwoDigitMostAppear(int arr[]){
	int size = 7, size1 = 0, dem;
	int arr1[7];
	while(size != 0){
		dem = 1;
		int i;
		for(i = 1; i <= size - 1; i++){
			if(arr[i] == arr[0]){
				dem++;
				delArr(arr, i, &size);
			}
			if(i == size - 1){
				delArr(arr, 0, &size);
			}
		}	
		arr1[size1] = dem
		size1++;	
	}
	sortDCS(arr1, size1);
	
}
void delArr(int arr[], int pos, int* size){
	int i;
	for(i = pos; i <= *size - 2; i++){
		arr[i] = arr[i+1];
	}
	*size--;
}
void sortDCS(int arr[], int size){
	int i, j;
	for(i = 0; i <= size - 2; i++){
		for(j = i + 1; j <= size - 1; j++){
			if(arr[i] < arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}
}
void swap(int* a; int* b){
	*a = *a + *b - (*b = *a);
}
