#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char tipo_compu[10];

};
typedef struct compu nuevacompu;

nuevacompu Pcnueva(nuevacompu PC);
void cargarPC(nuevacompu PC2[],int cantidad);
void mostrar(nuevacompu PC3[],int cantidad);
void pcvieja(nuevacompu PC4[],int cantidad);
void pcVeloz(nuevacompu PC5[],int cantidad);

int main(){
    int cantidad;
    nuevacompu Compu1;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    printf("\n ingrese cantidad de computadoras que desea comprar: ");
    scanf("%d",&cantidad);


    nuevacompu *pCompu=(nuevacompu*)malloc(sizeof(nuevacompu)*cantidad);
  
    for (int i = 0; i < cantidad; i++)
    {
        pCompu[i].velocidad=rand () % (4-1+1)+1;
        pCompu[i].anio=rand () % (2017-2000+1)+2000;
        pCompu[i].cantidad=rand () % (5-1+1)+1;
         strcpy(pCompu[i].tipo_compu,tipos[rand()% 6]);
        
    }
    for (int i = 0; i < cantidad; i++)
    {  printf("\n-----------------------------");
       printf("\nTIPO de procesador: %s",pCompu[i].tipo_compu);
       printf("\nAnio= %d",pCompu[i].anio);
       printf("\nvelocidad= %d Ghz",pCompu[i].velocidad);
       printf("\nCantidad=%d",pCompu[i].cantidad);
   
}

    //PUNTO 4 H
    Compu1=Pcnueva(Compu1);
    

    //punto 4-f
    nuevacompu *PCcompu=(nuevacompu*)malloc(sizeof(nuevacompu)*cantidad);
     cargarPC(PCcompu,cantidad);
     mostrar(PCcompu,cantidad);
     pcvieja(PCcompu,cantidad);
     pcVeloz(PCcompu,cantidad);

 printf("\n");

}



//funcion del 4 h

nuevacompu Pcnueva(nuevacompu PC){
        char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
       PC.velocidad=rand () % (4-1+1)+1;
       PC.anio=rand () % (2017-2000+1)+2000;
       PC.cantidad=rand () % (5-1+1)+1;
       strcpy(PC.tipo_compu,tipos[rand()% 6]);
    return PC;
}

void cargarPC(nuevacompu PC2[], int cantidad){

              for (int i = 0; i < cantidad; i++)
                    {
                        PC2[i]=Pcnueva(PC2[i]);
                    
                    }

}

void mostrar(nuevacompu PC3[],int cantidad){
    for (int i = 0; i< cantidad; i++)
    {  printf("\n----------lista de PCS------------------");
       printf("\nTIPO de procesador: %s",PC3[i].tipo_compu);
       printf("\nAnio= %d",PC3[i].anio);
       printf("\nvelocidad= %d Ghz",PC3[i].velocidad);
       printf("\nCantidad=%d",PC3[i].cantidad);
   
    }

}

void pcvieja(nuevacompu PC4[],int cantidad){
    nuevacompu auxiliar;
    auxiliar=PC4[0];
   for(int i=0;i<cantidad;i++){
       if(PC4[i].anio<=auxiliar.anio){
          auxiliar=PC4[i]; 
       }
   }

   printf("\n/*/**/**///*/*/***//*/*/");
printf("\n\nLa PC mas vieja es");
       printf("\nTIPO de procesador: %s",auxiliar.tipo_compu);
       printf("\nAnio= %d",auxiliar.anio);
       printf("\nvelocidad= %d Ghz",auxiliar.velocidad);
       printf("\nCantidad=%d",auxiliar.cantidad);

}

void pcVeloz(nuevacompu PC5[],int cantidad){
    nuevacompu auxiliar;
    auxiliar=PC5[0];
   for(int i=0;i<cantidad;i++){
       if(PC5[i].velocidad<=auxiliar.velocidad){
          auxiliar=PC5[i]; 
       }
   }
printf("\n\nLa PC con menos gigaherz es es");
       printf("\nTIPO de procesador: %s",auxiliar.tipo_compu);
       printf("\nAnio= %d",auxiliar.anio);
       printf("\nvelocidad= %d Ghz",auxiliar.velocidad);
       printf("\nCantidad=%d",auxiliar.cantidad);

}