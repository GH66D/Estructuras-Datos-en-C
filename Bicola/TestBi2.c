#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"D:\Documentos\IPN\2 Semestre\Bicola\BiCola.h"


int main(){
    srand(time(NULL));
    BiCola q=nuevaBi();
    ApNodoBi t;

    int i;
    for(i=1;i<=5;i++)
           q=formarBiIzq(i*10,q);

  while(1){
     puts("\nIzq a der");
     ImpBiIzq(q);
     puts("\nDer a izq");
     ImpBiDer(q);
     getchar();
  }


  getchar();

    return 0;
}
