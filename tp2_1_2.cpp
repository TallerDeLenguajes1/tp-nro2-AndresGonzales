#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 4
#define M 5

int main(){

	int f,c;
	double **mt;

	for(f = 0;f<N; f++){

		for(c = 0;c<M; c++){

			*(*(mt+f)+c)= (double **)malloc(sizeof(double));
			cprintf("%lf", mt[f][c]);
		}

		cprintf("\n");
	}

	return 0;
}