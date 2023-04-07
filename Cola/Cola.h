#include<stdio.h> 
#include"D:\Documentos\IPN\2 Semestre\Elem\Elem.h"
#include<stdlib.h>

typedef struct NodoCola{
        Elem dato;
        struct NodoCola *sig;
}*ApNodo;

typedef struct CNodo{
     ApNodo prim;
     ApNodo ult;
}*Cola;

Cola nueva(){
    Cola t=(Cola)malloc(sizeof(struct CNodo));
    t->prim=t->ult=NULL;
    return t;
}

int esnueva(Cola q){ return ((q->prim==NULL) && (q->ult==NULL));}

Cola formar(Cola q, Elem e){
    ApNodo t=(ApNodo)malloc(sizeof(struct NodoCola));
    t->dato=e; t->sig=NULL;
    if(esnueva(q))
        q->prim=q->ult=t;
    else{
         q->ult->sig=t;
         q->ult=t;
   }
   return q;
}

Elem primero(Cola q){return q->prim->dato;}
Elem ultimo(Cola q){return q->ult->dato;}

Cola desformar(Cola q){
       ApNodo t=q->prim;
       if(q->prim==q->ult)
            q->prim=q->ult=NULL;
       else
            q->prim=q->prim->sig;
       free(t);
       return q;
}

/*void ImpColaLista(Cola q){
    Lista l = vacia();
    while(!esnueva(q)) {
      l = cons(primero(q), l);
      desformar(q);
    }
    ImpLista(InvierteLista(l));
    return;
};
*/
Elem siguiente(Cola q){return q->prim->sig->dato;}
Elem siguiente1(Cola q){return q->prim->sig->sig->dato;}
