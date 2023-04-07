#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"D:\Documentos\IPN\2 Semestre\AVL\AVL.h"


int main(){

    AVL a=vacioAVL();
    Elem e;
    int i;

    for(i=1;i<=10;i++){
        a=insAVL(i,a);
        printf("%d\t",i);
    }
    printf("\n");


    ImpNivelPorNivelAB(a);

    for(i=1;i<=10;i++){
        a=elimAVL(i,a);
        printf("%d\t",i);
        printf("\n-----------\n");
        ImpNivelPorNivelAB(a);
        getchar();
    }


    return 0;
}
