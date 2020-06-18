#include <stdio.h>

int main(){
	
	int n, x=0, y=1, z=1, i=0;
	
	
	printf("digite los numeros que dese crear: ");
	scanf("%d", &n);
	
	printf("1,");
	
	for(i=1; i<n; i++){
		z=x+y;
		printf("%d,", z);
		x=y;
		y=z;
	}
	printf("\n");
	
	return 0;
}   
