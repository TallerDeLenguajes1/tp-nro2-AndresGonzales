#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#define F 15

int main(){

	int i, j, k, cont, aleatorio;
	int ** mt;
	int *arreglo;

	arreglo=(int*)malloc(F*sizeof(int));

	mt=(int**)malloc(F*sizeof(int));

	for(i = 0;i<F; i++){

		aleatorio=rand()% 11 + 5;
		*(mt+i)=(int*)malloc(aleatorio * sizeof(int));

		for(j = 0;j<aleatorio; j++){

			*(*(mt+i)+j)=rand()% 900 + 100;
			printf("%d"  "  ",*(*(mt+i)+j));

			if(*(*(mt+i)+j)%2==0){

			cont++;
	
			}
		}
		printf(" \npara la fila"" %d ""hay"" %d ""numeros pares", i, cont);

		arreglo[i]=cont;
		cont=0;

		printf("\n\n");

	}

	printf("vector dinamico de numeros pares por fila:\n\n");

	for(k=0;k<F;k++){

		printf("%d"" ",arreglo[k]);
			
	}

	return 0;
}