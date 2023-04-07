#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"D:\Documentos\IPN\2 Semestre\AVL\AVL.h"


int main(){

    AVL a=vacioAVL();
    Elem e;
    int i;
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    printf ( "Current local time and date: %s", asctime (timeinfo) );


    for(i=1;i<=200000;i++){
        a=insAVL(i,a);
        printf("%d\t",i);
    }

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    printf ( "Current local time and date: %s", asctime (timeinfo) );
    //ImpNivelPorNivelAB(a);

/*
    do{
        if(e=LeeElem()){
            printf("FactBal = %d\n",FactBal(a));
            getchar();
            a=insAVL(e,a);
            printf("FactBal = %d\n",FactBal(a));
            getchar();
            puts("----------");
            ImpNivelPorNivelAB(a);
        }
    }while(e);

    ImpNivelPorNivelAB(a);

    do
        if(e=LeeElem())
            a=insAVL(e,a);
    while(e);

    ImpNivelPorNivelAB(a=rotaIzqDer(a));
*/
    return 0;
}
