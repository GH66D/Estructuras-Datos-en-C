#include<stdio.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\Cola-Lista\Cola.h"


int main(){
    Cola a=nueva();

    a=formar(formar(formar(formar(nueva(),'a'),'e'),'i'),'o');

    ImpElem(primero(a));
    ImpElem(primero(desformar(a)));

    return 0;
}


