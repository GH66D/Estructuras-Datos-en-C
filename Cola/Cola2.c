#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include"D:\Documentos\IPN\2 Semestre\Cola\Cola.h"

void carrusel(Cola);
void ImpCola(Cola);
void ImpColaLista(Cola);
void procesador(Cola);



int main(){
int i,f;
    Cola q=nueva();

    q=formar(formar(formar(formar(formar(nueva(),4),6),2),7),5);
    //q=formar(nueva(),4);
ImpCola(q);
puts("\n");
printf("%d",primero(q));
puts("\n");
printf("%d",ultimo(q));
puts("\n");
printf("%d",siguiente(q));
puts("\n");
printf("%d",siguiente1(q));
    //carrusel(q);
    //procesador(q);


    return 0;
}

void carrusel(Cola q){
	while(!esnueva(q)){
	ImpCola(q);
    if((primero(q)-3)>0)
		q=formar(desformar(q),primero(q)-3);
    else 
    	q=desformar(q);
    	puts("\n");
    getchar();
    
    }
}

void ImpCola(Cola q){
	ApNodo c;
	if(!esnueva(q)){
		c=q->prim;
		while(c!=NULL){
			ImpElem(c->dato);
			c=c->sig;
		}
	}
	
}

/*
void ImpColaLista(Cola q){
	   Lista l;
     if(!esnueva(q))
          ImpLista(q->prim);
};
*/

/*void procesador(Cola q){
int t=1,n,i,j;
	for(t;t=3;t++){
	ImpCola(q);
	primero(q)-3;
	q=formar(desformar(q),primero(q)-3);	
	t++;
	}
	for(j=1;j<2;)
	n=rand()%4;
	for(i=1;i=n;i++){
	ImpCola(q);
	primero(q)-3;
	q=formar(desformar(q),primero(q)-3);	
		
		
		
	}
	
}
*/

/*
void procesador(Cola q){

    srand(time(NULL));

    int sec = 0, n = 0;

    while(!esnueva(q)){

        ImpElem(primero(q));

        getchar();

        if(primero(q) > 3)

            formar(desformar(q), primero(q) - 3);

        else    

            desformar(q);

        sec += 3;

        if(sec ==  9){

            sec = 0;

            n = rand()%4; 

            for(int i = 0; i < n; i++)

                formar(q,1+rand()%10);

        }

    }   

}
*/



	
