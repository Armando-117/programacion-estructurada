#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char op;
    float a,b,c;
    printf("BIENVENIDO A SU CALCULADORA PERSONAL \n");
    printf("\n ingres una operacion: ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op){
    	case '+':
	     c=a+b;
			printf("el resultado es: %f",c);
        	break;
        case '-':
        	c=a-b;
        	printf("el resultado es: %f",c);
        	break;
        case'*':
        	c=a*b;
        	printf("el resultado es: %f",c);
        	break;
        case'/':
        	c=a/b;
        	printf("el resultado es: %f",c);
        	break;
        						
        
	}

	return 0;
}
