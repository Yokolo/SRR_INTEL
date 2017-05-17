#include <stdio.h>
#include <stdlib.h>
#define N 10

int main ( int argc, char **argv) {
int tab[N];
unsigned tasks[N];
int i;
for(i=0;i<N;i++){
	tasks[i]=i%4;
}
unsigned nbtasks = N;
//omp_set_workload(tasks,nbtasks);
#pragma omp parallel for schedule(runtime)
for ( i=0 ; i<N ; i++ ){
	tab[i]=i + i;
	}
	
	printf("Tout c'est bien passé HELLOWORLD ! \n");
	for(i=0;i<N;i++){
		printf("%d ",tab[i]);
	}
	printf("\n\n");
		
}

