#include<stdio.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\AVL\AVL.h"


int main(){

    AVL a=vacioAVL();

    Elem e=1;

    do{
        if(e=LeeElem())
            a=insAVL(e,a);
            if(FactBal(a)>1)
                if(FactBal(izqAB(a))>0)
                    a=rotaDer(a);
                else
                    a=rotaDerIzq(a);
             else if(FactBal(a)<-1)
                     if(FactBal(derAB(a))<0)
                         a=rotaIzq(a);
                     else
                         a=rotaIzqDer(a);
        puts("----------");
        ImpNivelPorNivelAB(a);
    }while(e);
/*
    ImpNivelPorNivelAB(a);

    do
        if(e=LeeElem())
            a=insAVL(e,a);
    while(e);

    ImpNivelPorNivelAB(a=rotaIzqDer(a));
*/
    return 0;
}
