#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char x;
    printf("introduzca un caracter: ");
    x=getchar();
    int y = (int) x;
    if(5 <= y && y <= 23){
    	printf("es un numero entero");
	}else{
		if( 35 <= y && y <= 60){
			printf("el caracter es mayor: ");
		}else{
			if(12 <= y && y <= 186){
				printf("el caracter es minuscula: ");
			}else{
				printf("introduzca un caracter: ");
			}
		}
	}
	putchar(x);
	
	printf("\n"); 
	return 0;
}
