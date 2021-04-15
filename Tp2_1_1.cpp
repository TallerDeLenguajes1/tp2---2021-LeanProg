#include <iostream>
#include <stdlib.h>
using namespace std;
#define N 4
#define M 5
#define filas 15
//Ortega leandro Francisco TP2
int main(){

    int f,c;
    int numeros=rand () % (999-100+1);
    double j=0;
   double mt[N][M];
//printf("---H=%d--D=%d--",H,D);
//Problema 1  y 2 
    for(int i=0;i<N; i++){
            for (int k = 0; k<M; k++)
            {
                mt[i][k]=j;
                j++;
            }
            
    }
    for(f=0; f<N; f++){
            for (c = 0; c <M; c++)
            {
                printf("%lf",mt[f][c]);
            }
            printf("\n");
    }

/*Punto 3 del TP2  */
    
  int columnas;
  int k=0;
  
  do
  {       
      printf("\n ingrese un numero entre 5 y 15 para las columnas:");
      scanf("%d",&columnas);
            
  

  }while(columnas<=4||columnas>=16);
  //printf("columnas: %d---",columnas);
  printf("\n"); 
   //matriz con punteor doble
  int** MiMatriz= (int **)malloc(sizeof(int*)* columnas);
   int *arreglo=(int*)malloc(sizeof(int)*filas);
  for(int i=0; i<columnas; i++){
        MiMatriz[i]=(int*)malloc(sizeof(int)*filas);
        for (int j = 0; j < filas; j++)
        {
            /* code */
            MiMatriz[i][j]=numeros;
            numeros=rand () % (999-100+1);
             printf(" %d ",MiMatriz[i][j]); 
            if( MiMatriz[i][j]%2==0){
                if(k<15){
                   arreglo[k]=MiMatriz[i][j];
                   k++;
                }
               
            }
            
        }
     printf("\n");
  }

    printf("\n");
  for(k=0;k<filas;k++){
      printf("\narreglo[%d]=%d",k, arreglo[k]);
  }

 
    
    printf("FIN");
}