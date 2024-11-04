#include <stdio.h>
#include <math.h>

int main(){
	int a, b, bcnn;
    scanf("%d%d", &a, &b);
    if(a < 0) a *= -1;
    if(b < 0) b *= -1;
    int tich = a*b;
    while(a != b){
        if(a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    bcnn = tich/a;

	return 0;
}
