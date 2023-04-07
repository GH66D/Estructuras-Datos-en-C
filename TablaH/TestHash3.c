#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"D:\Documentos\IPN\2 Semestre\TablaH\TablaHash.h"

int main(int argc, char *argv[]){

    FILE *ent=fopen(*++argv,"r");
    TablaH t;
    Elem pal1=(Elem)malloc(20),pal2;
    int n=97,i;

    t=consTH(n);

    while(fscanf(ent,"%s",pal1)!=EOF){
        strcpy(pal2=(Elem)malloc(20),pal1);
        t=insertaTH(pal2,t,n);
    }

    for(i=0;i<97;i++)
        if(!esvacia(t[i])){
            printf("i->%d\n",i);
            ImpLista(t[i]);
            printf("\n");
        }



    return 0;
}
