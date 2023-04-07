#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"D:\Documentos\IPN\2 Semestre\Ordenamiento\Ordenamiento.h"

int main(){
   int i,j,n=10000, a[100000],b[100000],c[100000];
   time_t inicio, terminacion;

   srand(time(NULL));

   printf("Arreglo generado.\n");
   for(i=0;i<n;i++)
       a[i]=b[i]=c[i]=1+rand()%9999999;
       //scanf("%d",c+i);
   /*
   inicio = time(NULL);
   QuickSort(a,n);
   terminacion = time(NULL);
   printf("Arreglo ordenado con QuickSort (%ld) [enter]:\n",terminacion-inicio);

   inicio = time(NULL);
   Burbuja(b,n);
   terminacion = time(NULL);

   printf("Arreglo ordenado con BubbleSort (%ld)[enter]:\n",terminacion-inicio);
*/
   for(i=0;i<n;i++)
       printf("%d\t",c[i]);
   printf("\n");
   getchar();
   fflush(stdin);
   inicio = time(NULL);
   Seleccion(c,n);
   terminacion = time(NULL);

   printf("Arreglo ordenado:\n");
   for(i=0;i<n;i++)
       printf("%d\t",c[i]);

   return 0;
}
