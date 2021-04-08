#include <iostream>
#include <stdlib.h>
using namespace std;
#define N 4
#define M 5
//Ortega leandro Francisco TP2
int main(){
    int f,c;
    double j=0;
    double* puntero;
    double mt[N][M];
    puntero=&mt[0][0];

    for(int i=0;i<N; i++){
            for (int k = 0; k<M; k++)
            {
                *puntero=j;
                puntero++;
                j++;
            }
            
    }
    puntero=&mt[0][0];
    for(f=0; f<N; f++){
            for (c = 0; c <M; c++)
            {
                printf(" %lf",*puntero++);
            }
            printf("\n");
    }

    
    printf("FIN");
}