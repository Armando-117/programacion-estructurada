#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*el usuario te va a dar un numero entero, si te da un numero menor a 0 se termina el ciclo, y con esos sacar un promedio\*/

int main() {
    int x, sum=0, cont=0;
    float prom;
	printf("\n ingrese una calificacion: ");
	scanf("%d", &x);
	while(x>=0){
		sum=sum+x;
		cont++;	
		printf("\n ingresa una calificacion: ");
		scanf("%d", &x);
		
	}
    prom=sum/cont;
	printf("el promedio es: %f", prom);
	return 0;
}
