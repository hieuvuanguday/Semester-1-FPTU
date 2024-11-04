#include <stdio.h>
#include <stdlib.h>
int checkTriangle(int a, int b, int c) {
	int check = 0;
	//Write your statements here
	if(a + b > c && a + c > b && b + c > a){
		check = 1;
		return check;
	}
	//End your statements
	return check ;
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION===========
int main() {
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int a,b,c;
	int check;
	do {
		printf("Enter a, b and c: ");
		scanf("%d%d%d",&a,&b,&c);
	} while( (a<=0) || (b<=0) || (c<=0) );
	check = checkTriangle(a,b,c);
	printf("\nOUTPUT:\n");
	printf("%d",check);
	printf("\n");
	system ("pause");
	return(0);
}
//==============================================================================
