#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"
#include"D:\Documentos\IPN\2 Semestre\TablaH1\ElemTH.h"

typedef Lista *TablaH;

TablaH consTH(int tam){
    int i;
    TablaH  t  =(TablaH)malloc(sizeof(Lista)*tam);
    char   *pal=(char*)malloc(sizeof(char)*10);

    for(i=0;i<tam;i++)
        t[i]=vacia();
    return t;
}

TablaH insertaTH(ElemT eT, TablaH t, int tam){
	Elem e;
       t[Llave(eT)%tam]=cons(e,t[Llave(eT)%tam]);
       return t;
}

void ImpTablaH(TablaH t, int n){
    int i;
    for(i=0;i<n;i++){
        printf("Llave %d:\n",i);
        ImpLista(t[i]);
        printf("-------------------------------------\n");
    }
}

void Consulta(TablaH t,char *Key, int n){
    ElemT eT;
    Elem e;
    strcpy(eT.pais,Key);
    if(EstaEn(e,t[Llave(eT)%n]))
        ImpElem(ConsultaLista(e,t[Llave(eT)%n]));
    else
        printf("%s no esta en la tabla.\n",eT.pais);
}

void Borra(TablaH t, char *Key, int n){
    ElemT eT;
    Elem e;
    strcpy(eT.pais,Key);
    if(EstaEn(e,t[Llave(eT)%n]))
        t[Llave(eT)%n]=BorraElem(e,t[Llave(eT)%n]);
    else
        printf("%s no esta en la tabla.\n",eT.pais);
}
/*
TablaH Modifica(TablaH t, char *Llave, int n){
    Elem e;
    strcpy(e.pais,Key);
    if(EstaEn(e,t[Llave(e)%n]))
        t[Llave(e)%n]=ModificaElem(e,t[Llave(e)%n]);
    else
        printf("%s no esta en la tabla.\n",e.pais);


}


}
*/
