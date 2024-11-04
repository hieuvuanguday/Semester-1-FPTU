#include <stdio.h>

int main()
{
    int x1 = 0;
    int x2 = 1;
    int n, x3;
    scanf("%d", &n);
    if(n == 1){
        x3 = 1;
    }else{
    	int i;
        for(i = 1; i <= n - 1; i++){
            x3 = x1 + x2;
            x1 = x2;
            x2 = x3;
        }
    }
//    x3 %= (10*10*10*10*10*10 + 7); 
    printf("%d", x3);
    return 0;
}

