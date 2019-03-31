#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define N 4
#define M 5

typedef double ** matriz;
typedef double * p_d;

int main(){

	int f,c;
	matriz mt[N][M];

	for(f = 0;f<N; f++){

		for(c = 0;c<M; c++){

			cprintf("%lf", mt[f][c]);
		}

		cprintf("\n");
	}

	return 0;
}