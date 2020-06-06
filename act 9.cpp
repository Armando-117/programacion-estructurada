#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    
    int m, x;
    char n[10];
    char app[20];
    char apm[20];
    char dd[10];
    char esc[40];
    int gr;
    char cr[50];
    char g[15];
    
    
    printf("\n que quieres hacer 1. ingresar datos, 2. salir: ");
    scanf("%d", &x);
    
    switch(x){
          
          case 1: 
                 printf("\n digite su matricula: ");
                 scanf("%d", &m);
                 printf("\n escibe tu nombre: ");
                 scanf("%s", &n);
                 printf("\n escribe tu apellido materno: ");
                 scanf("%s", &app);
                 printf("\n escribe tu apellido materno: ");
                 scanf("%s", &apm); 
                 printf("\n escribe tu fecha de nacimiento (dd/mm/aa): ");
                 scanf("%s", &dd);
                 printf("\n ingresa el nombre de tu escuela: ");
                 scanf("%s", &esc);
                 printf("\n ingresa el semestre que estas cursando: ");
                 scanf("%d", &gr);
                 printf("\n ingresa el nombre de tu carrera: ");
                 scanf("%s", &cr);
                 printf("\n ingresa tu genero: ");
                 scanf("%s", &g);
                 
                 break;
          case 2:
                 break;
          default: printf("\n no cumple con lo especificado");
  }
  
  printf("\n%d \n%s %s %s \n%s \n%s \n%d \n%s \n%s \n", m, n, app, apm, dd, esc, gr, cr, g);
  system("pause");	
  return 0;
}
