#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
  
    int b[3][3];
    int a[3][3];
    int c[3][3];
    int i,j;
    
    printf("matriz de 3x3");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("\n escribe un numero [%d][%d]: ", i, j);        
            scanf(" %d", &b[i][j]);        
        }    
    }	
    
    printf("\n segunda matiz");
    
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("\n escribe un numero [%d][%d]: ", i, j);
            scanf(" %d", &a[i][j]);
        }     
    }
    
    printf("\n la multiplicacion de ambas matirces");
    
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
           c[i][j]=(a[i][1]*b[1][j])+(a[i][2]*b[2][j])+(a[i][3]*b[3][j]);
        }    
    }
       
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf(" %d", &c[i][j]);        
            printf("\n"); 
        }
    }
    
    
  system("pause");
 
  return 0;
}
