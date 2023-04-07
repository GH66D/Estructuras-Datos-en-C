#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#include"D:\Documentos\IPN\2 Semestre\Bicola\BiCola.h"

int main(){
    srand(time(NULL));
    BiCola q=nuevaBi();
    int i;
    for(i=0;i<5;i++){
           q=formarBiIzq(1+rand()%100,q);
           q=formarBiDer(q,1+rand()%100);
    }

    ImpBiIzq(q);
    puts("\n--------");
    ImpBiDer(q);
    puts("\n--------");
    getchar();

    /*while(!esnuevaBi(q))
        if(rand()%2){
            //ImpElem(izquierdoBi(q));
            ImpBiIzq(q);
            puts("");
            q=desformarBiIzq(q);

        }
        else{
            //ImpElem(derechoBi(q));
            ImpBiDer(q);
            q=desformarBiDer(q);
            puts("");
        }
*/

   esnuevaBi(q)?puts("Si es nueva."):puts("No es nueva.");

    q=formarBiIzq(10,q);
    esnuevaBi(q)?puts("Si es nueva."):puts("No es nueva.");

    q=formarBiDer(q,40);
    esnuevaBi(q)?puts("Si es nueva."):puts("No es nueva.");

    ImpElem(izquierdoBi(q));

    ImpElem(derechoBi(q));

    q=formarBiDer(q,50);

    ImpElem(derechoBi(q));

    q=desformarBiIzq(q);

    ImpElem(izquierdoBi(q));

    q=desformarBiDer(q);

    ImpElem(derechoBi(q));

    ImpElem(derechoBi(q));

    
	return 0;
}
