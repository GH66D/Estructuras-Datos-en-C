#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"D:\Documentos\IPN\2 Semestre\ABB\ABB.h"

int main(){

   Elem e=1;
   ABB a=vacioAB();

   while((e=LeeElem())!=0)
      a=insord(e,a);

   InOrd(a);
   printf("Altura del arbol: %d\n",altura(a));

   while(1){
        printf("Cual elemento quieres eliminar?");
        e=LeeElem();
        a=elimord(e,a);
        ImpNivelPorNivelAB(a);
   }



   return 0;
}

