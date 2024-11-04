#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 //Maximum size of the array

void countEvenOddElement(int *arr,int size,int *x,int *y) {
	// Write your statements here
	*x = 0;
	*y = 0;
	int i;
	for(i = 0; i <= size - 1; i++){
		if(arr[i] % 2 == 0){
			(*x)++;	
		}else{
			(*y)++;
		}
	}
	// End your statements
}
//==============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=================
int main() {
	system("cls");
	printf("\nTEST Q3 (3 marks):\n");
	int arr[MAX_SIZE];
	int i, size, even, odd;
	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf("%d", &size);
	/* Input array elements */
	printf("Enter %d elements in array:\n", size);
	for(i=0; i<size; i++) {
		printf("a[%d]:", i);
		scanf("%d", &arr[i]);
	}
	countEvenOddElement(arr,size,&even,&odd);
	//====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE====
	//==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
	printf("\nOUTPUT:\n");
	printf("%-5d%d\n", even,odd);
	printf("\n");
	system ("pause");
	return(0);
}
