#include<stdio.h>

void ImpArreglo(int a[], int num){
	int j;
	for(j=0;j<num;j++)
	    printf("%d\t",a[j]);
	printf("\n");
}

void LeeArreglo(int a[], int n){
	int i;
    for(i=0;i<n;i++)
         scanf("%d",a+i);
}
