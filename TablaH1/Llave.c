#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\TablaH1\ElemTH.h"

int main(int argc, char *argv[]){

    int i=0,n=0;
    char pal[80];
    scanf("%s",pal);

    while(pal[i])
         n=n+pal[i++];

    printf("%s %d %d\n",pal,n,n%97);

    return 0;
}
