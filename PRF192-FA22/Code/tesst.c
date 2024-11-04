#include<stdio.h>
#include<math.h>

const MAX = 100;

void transToBin();

int main(){
	int loop;
	scanf("%d", &loop);
	int i;
	for(i = 0; i <= loop - 1; i++){
		transToBin();
		printf("\n");	
	}
	
	return 0;
}

void transToBin(){
	int num;
	scanf("%d", &num);
	int arr[MAX];
	int size = 0;
	while(num != 0){
		arr[size] = num % 2;
		size++;
		num /= 2;
	}
	int i;
	for(i = size - 1; i >= 0; i--){
		printf("%d", arr[i]);
	}
}





