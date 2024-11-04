#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//---------------------------
long fun(long x, int n) {
	long result;
	//Begin your statements here
	result = 0;
	int i;
	for(i = 1; i <= n; i++){
		result += pow(x, i);
	}
	//End your statements
	return result;
}
//=========DO NOT ADD NEW OR CHANGE STATEMENTS THE MAIN FUNCTION =======
int main() { 
	system("cls");
	printf("\nTEST Q2 (03 marks):\n");
	long s;
	int n,x;
	printf("Enter x = ");
	scanf("%d",&x);
	printf("Enter n (n>2)= ");
	scanf("%d",&n);
	s = fun(x,n);
	printf("\nfun(%d,%d) = %ld\n",x,n,s);
	printf("\nOUTPUT:\n");
	printf("%ld\n",s);
	printf("\n");
	system ("pause");
	return(0);
} //================================================
