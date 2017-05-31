#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 10

int main ( int argc, char **argv) {
int tab[N];
omp_sched_t *sched;
int trunks;
unsigned tasks[N];
int i;
for(i=0;i<N;i++){
	tasks[i]=i;
}
unsigned nbtasks = N;
omp_set_workload(tasks,nbtasks);
//printf("%d",omp_get_max_threads());
#pragma omp parallel for schedule(runtime)
for ( i=0 ; i<N ; i++ ){
	tab[i]=(i+i/2)*4+10;
	}
	
	for(i=0;i<N;i++){
		printf("%d ",tab[i]);
	}
	printf("\n\n");
		
}

