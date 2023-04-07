#include<stdio.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\Lista\Lista.h"

// Lista cons(Elem, Lista);  denota lo mismo que cons:Elem, Lista -> Lista;

void ImpLista(Lista);
int NumElemsL(Lista);
Lista PegaListas(Lista, Lista);
Lista InvierteLista(Lista);
Lista InsOrd(Elem,Lista);
Lista OrdenaListaAsc(Lista);

int main(){
    int n=5;
    Elem a;
    Lista x=vacia(), y=vacia();

    while(n--)
        x=cons(LeeElem(),x);

    puts("-------");
    ImpLista(x);
    puts("-------");
    ImpLista(OrdenaListaAsc(x));

/*
    x=cons(60,cons(50,cons(40,cons(30,x))));
    y=cons(600,cons(500,cons(400,cons(300,y))));

    ImpElem(cabeza(x));

    ImpElem(cabeza(resto(x)));

    esvacia(x)?printf("Si\n"):printf("No\n");

    printf("La lista x tiene %d elementos.\n",NumElemsL(x));
    printf("El resto de la lista x tiene %d elementos.\n",NumElemsL(resto(x)));
    printf("La lista [x|y] tiene %d elementos.\n",NumElemsL(PegaListas(x,y)));
    printf("El resultado de pegar la lista \n");
    ImpLista(x);
    printf("con la lista \n");
    ImpLista(y);
    printf("Es la lista con los elementos:\n");
    ImpLista(PegaListas(x,y));
    printf("La lista que resulta de invertir la lista que resulta de pegar x y y es:\n");
    ImpLista(InvierteLista(PegaListas(x,y)));
*/
    fflush(stdin);
    getchar();

    return 0;
}


int NumElemsL(Lista l){
    if(esvacia(l))
        return 0;
    else
        return 1+NumElemsL(resto(l));
};

Lista InsOrd(Elem e, Lista l){
    if(esvacia(l))
        return cons(e,l);
    else if(EsMenor(e,cabeza(l)))
              cons(e,l);
         else
              return cons(cabeza(l),InsOrd(e,resto(l)));
};

Lista OrdenaListaAsc(Lista l){
     if(esvacia(l))
        return l;
     else
        return InsOrd(cabeza(l),OrdenaListaAsc(resto(l)));
};
