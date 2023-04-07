#include<stdio.h>
#include<stdlib.h>

int main(){
   char *pal=(char*)malloc(sizeof(char)*10);
   int i;

   for(i=0;i<10;i++)
      pal[i]='a'+i;

   for(i=0;i<10;i++)
      printf("%c",pal[i]);

   printf("\n");



    return 0;
}
