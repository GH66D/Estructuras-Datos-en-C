#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\TablaH1\ElemTH.h"

int main(int argc, char *argv[]){

    FILE *in=fopen(*++argv,"r");
    Elem e;
    int i=0;
	
	
    e=FLeeElem(in);
    printf("Llave de %s es %d.\n",e.pais,Llave(e));
    getchar();

    while(i<59){
         e=FLeeElem(in);
         ImpElem(e);
         i++;
    }

    return 0;
}
