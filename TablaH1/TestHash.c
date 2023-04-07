#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"D:\Documentos\IPN\2 Semestre\TablaH1\TablaHash.h"
int main(int argc, char *argv[]){

    FILE *in=fopen(*++argv,"r");
    ElemT eT;
    Elem e;
    int i=0,n=97;
    TablaH paises;
    char pal[80];
    
    
    paises=consTH(n);

    for(i=0;i<59;i++)
         paises=insertaTH(eT=FLeeElemT(in),paises,n);
    ImpTablaH(paises,n);
    
	while(1){
       printf("Cual pais quieres consultar?");
       scanf("%s",pal);
       Consulta(paises,pal,n);
       printf("Cual pais quieres borrar?");
       scanf("%s",pal);
       Borra(paises,pal,n);
       puts("-----------------");
       ImpTablaH(paises,n);
       }
       
	paises=consTH(n);

    	for(i=0;i<59;i++)
         	paises=insertaTH(eT=FLeeElemT(in),paises,n);
    		ImpTablaH(paises,n);

    
/*
    strcpy(e.pais,pal);
    EstaEn(e, paises[Llave(e)%97])?printf("%s esta en la tabla.\n",e.pais):
                            printf("%s no esta en la tabla.\n",e.pais);
    printf("Llave %d.\n",Llave(e)%97);
*/

    return 0;
}
