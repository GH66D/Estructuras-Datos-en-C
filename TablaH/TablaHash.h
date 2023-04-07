#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"
#include"D:\Documentos\IPN\2 Semestre\TablaH\ElemTH.h"

typedef Lista *TablaH;

TablaH consTH(int tam){
    int i;
    TablaH  t  =(TablaH)malloc(sizeof(Lista)*tam);
    char   *pal=(char*)malloc(sizeof(char)*10);

    for(i=0;i<tam;i++)
        t[i]=vacia();
    return t;
}

TablaH insertaTH(ElemT e, TablaH t, int tam){
       t[Llave(e)%tam]=cons(e,t[Llave(e)%tam]);
       return t;
}
