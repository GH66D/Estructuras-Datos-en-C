#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"
#include<stdlib.h>

typedef struct NodoCirc{
                 Elem dato;
                 struct NodoCirc *sig;
               }*Circular;

Circular nuevaCirc(){return NULL;}
int esnuevaCirc(Circular c){return c==NULL;}
Circular formarCirc(Circular c, Elem e){
        Circular t=(Circular)malloc(sizeof(struct NodoCirc));
        t->dato=e;
        if(esnuevaCirc(c)){
                c=t;
                t->sig=t;
        }
        else{
            t->sig=c->sig;
            c->sig=t;
        }
        return t;
}
Elem primeroCirc(Circular c){return c->sig->dato;}
Circular desformarCirc(Circular c){
       Circular t=c;
       if(c==c->sig){
          free(t);
          return nuevaCirc();
       }
       else{
         c->sig=c->sig->sig;
         free(t);
         return c;
       }
}

Circular rotarCirc(Circular c){
      return c->sig;
}

void ImpColaCirc(Circular c){
	Circular t=c;
	if(esnuevaCirc(t))
	return;
	else
		do{
			ImpElem(primeroCirc(t));
			t=t->sig;
			//t=rotarCirc(t);
		}while(t!=c);
};
