#include <stdio.h>
#include <stdlib.h>

int main(){
	int h, m, s;
	scanf("%d%d%d", &h, &m, &s);
	if(h >= 0 && h <= 23){
		if(m >= 0 && m <= 59){
			if(s >= 0 && s <= 59){
				printf("TIME: %02d:%02d:%02d", h, m, s);
			}else{
				printf("INVALID DATA");
			}
		}else{
			printf("INVALID DATA");
		}
	}else{
		printf("INVALID DATA");
	}
	
	return 0;
}