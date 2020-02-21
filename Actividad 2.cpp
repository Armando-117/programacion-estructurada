#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=6, b=1;
	int s=6+1;
	int r=6-1;
	int m=6*1;
	int d=6/1;
	int mod=6%1;
    int x= 6 >> 1;
    int y= 6 << 1;
    int i= 6 == 1;
    int mm= 6; mm++;
    int f= 1; f--;
	printf("\n %d+%d= %d",a,b,s);
    printf("\n %d-%d= %d", a,b,r);
	printf("\n %d*%d= %d",a,b,m);
	printf("\n %d/%d= %d",a,b,d);	
	printf("\n %dmod%d= %d",a,b,mod);
	printf("\n %d >> %d= %d",a,b,x);
    printf("\n %d << %d= %d",a,b,y);
    printf("\n %d == %d= %d",a,b,i);
    printf("\n %d= %d++",a,mm);
    printf("\n %d=%d--",b,f);
    
	
	int z, u, n, t;
    printf("\n ingrese el valor: ");
    scanf("%d", &z);
    printf("\n ingrese el valor: ");
    scanf("%d", &u);
    printf("\n ingrese el valor: ");
    scanf("%d", &n);
    printf("\n ingrese le valor: ");
    scanf("%d", &t);
    if(z<u && n>t){ printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}if(z<u || n>t){ printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}if(!(z<u)){
		printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}if(z<u == n>t){
		printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}
	
	
	char w, p;
	printf("\n ingrese su valor: ");
	scanf(" %c", &w);
	printf("\n ingrese su valor: ");
	scanf(" %c", &p);
	if(w==p){
		printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}if(w<p){
		printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}if(w>p){
		printf("\n es verdadero");
	}else{
		printf("\n es falso");
	}
	return 0;
}
