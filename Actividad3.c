#include <stdio.h>
#include <math.h>

int main () { 

	int N,NUM,i,SUM=0;
	printf("Indique cuantos datos numéricos se van a ingresar\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
	printf("Ingresa el valor numero %d\n",i);
	scanf("%d",&NUM);
	if (NUM>0) {
		SUM+=NUM;
	}


	}
	printf("La suma de los valores es:\n%d",SUM);

	return 0;
}