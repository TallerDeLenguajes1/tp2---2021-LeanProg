#include <iostream>
using namespace std;
#define N 4
#define M 5
//Ortega leandro Francisco TP2
int main(){
    int f,c;
    double j=0;
    double mt[N][M];
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

    
    printf("FIN");
}