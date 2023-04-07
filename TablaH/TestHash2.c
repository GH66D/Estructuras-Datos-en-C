#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"D:\Documentos\IPN\2 Semestre\TablaH\TablaHash.h"

int main(int argc, char *argv[]){

    FILE *ent=fopen(*++argv,"r");
    int i=0,j=0;
    Elem pais[97], pal=(Elem)malloc(20);
    int pos[30]={0};

    for(i=0;i<30;i++)
        pos[i]=0;
    i=0;
    while(fscanf(ent,"%s",pal)!=EOF){
          strcpy(pais[j=Llave(pal)%97]=(Elem)malloc(20),pal);
          pos[j]=1;
          printf("Pais -> %s\t Llave ->%d i->%d\n",pais[j],Llave(pais[j]),j);
          //getchar();
    }
    getchar();
    for(j=0;j<97;j++)
      if(pos[j])
         printf("Pais -> %s\t Llave ->%d i->%d\n",pais[j],Llave(pais[j]),j);


/*
    printf("%d es la representacion numerica de %s.\n",Llave(pais),pais);


   int i, tam=17;
   TablaH tabla=consTH(tam);


   srand(time(NULL));


   for(i=0;i<50;i++)
      tabla=insertaTH(1+rand()%100,tabla,tam);

   ImpLista(tabla[0]);
   printf("\n");
   ImpLista(tabla[1]);

   for(i=0;i<10;i++){
      printf("%d.- ",i);
      ImpLista(tabla[i]);
      printf("\n");
   }
*/
    return 0;
}
