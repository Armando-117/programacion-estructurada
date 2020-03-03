#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*el usuario te va a dar un numero entero, si te da un numero menor a 0 se termina el ciclo, y con esos sacar un promedio\*/

int main() {
    int x=0, sum=0, cont=-1;
    float prom;
	do{
	sum=sum+x;
	cont++;
	printf("\n ingrese una calificacion: ");
	scanf("%d", &x);
	
	}while(x>=0);
	
	prom=((float)sum)/cont;
	printf("el promedio es: %.2f", prom);		
	
    
	return 0;
}
