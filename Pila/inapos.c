#include<stdio.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\Pila\Pila.h"

int Esdigito(Elem);
int EsMayuscula(Elem);
int EsMinuscula(Elem);
int EsLetra(Elem);
int EsOperando(Elem);
int EsParIzq(Elem);
int EsParDer(Elem);
int Prec(Elem);
void In_A_Post(Elem*);

int main(int argc, char *argv[]){

    In_A_Post(*(argv+1));

    return 0;
}

int EsMayuscula(Elem c){return (c>='A')&&(c<='Z');};
int EsMinuscula(Elem c){return (c>='a')&&(c<='z');};
int EsLetra(Elem c){return EsMayuscula(c)||EsMinuscula(c);}
int Esdigito(Elem c){return (c>='0')&&(c<='9');};
int EsOperando(Elem c){return (EsLetra(c)||Esdigito(c));};
int EsParIzq(Elem c){return EsIgual(c,'(');};
int EsParDer(Elem c){return EsIgual(c,')');}
int Prec(Elem c){
    switch(c)
    {
       case '^': return 3;
       case '*': case '/': return 2;
       case '+': case '-': return 1;
    }
}
int EsOperador(Elem c){return EsIgual(c,'^')||EsIgual(c,'*')||EsIgual(c,'/')||
                              EsIgual(c,'+')||EsIgual(c,'-');}


void In_A_Post(Elem* in){
    int i=0;
    Pila ops=empty();
    while (in[i]!='\0'){
          if(EsOperando(in[i]))
                ImpElem(in[i]);
          else if(EsOperador(in[i]))
                 if(isempty(ops))
                   ops=push(in[i],ops);
               else if(EsParIzq(in[i]))
                         ops=push(in[i],ops);
                    else if(EsParDer(in[i]))
                             while(!EsParIzq(top(ops))&&!isempty(ops)){
                                  ImpElem(top(ops));
                                  ops=pop(ops);
                              }
                          else if(EsMayor(Prec(in[i]),Prec(top(ops))))
                                   ops=push(in[i],ops);
                               else {while(!EsMayor(Prec(in[i]),Prec(top(ops)))){
                                         ImpElem(top(ops));
                                        ops=pop(ops);
                                       }
                                    ops=push(in[i],ops);
                               }
               i++;
    }
    while(!isempty(ops)){
        ImpElem(top(ops));
        ops=pop(ops);
    }
};
