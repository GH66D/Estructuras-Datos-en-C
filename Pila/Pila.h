#include"D:\Documentos\IPN\2 Semestre\Elem\Elem.h"
#include<stdlib.h>

typedef struct NodoPila{
                 Elem dato;
                 struct NodoPila *sig;
               }*Pila;

Pila empty(){ return NULL; }  // vacia: -> Pila;
Pila push(Elem e, Pila l){
       Pila t=(Pila)malloc(sizeof(struct NodoPila));
       t->dato=e;
       t->sig=l;
       return t;
}
int isempty(Pila l){return l==empty();} // esvacia: Pila -> Bool;
Elem top(Pila l){return l->dato;}   // cabeza: Pila -> Elem;
Pila pop(Pila l){return l->sig;}





