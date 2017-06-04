#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define N 48

int main ( int argc, char **argv) {
int tab[N];
omp_sched_t *sched;
int trunks;
unsigned tasks[N];
int i;
/*for(i=0;i<N;i++){
	tasks[i]=i;
}*/
for(i=0;i<17;i++){
	tasks[i]=10;
}
for(i=17;i<24;i++){
	tasks[i]=20;
}
for(i=23;i<29;i++){
	tasks[i]=30;
}
for(i=29;i<33;i++){
	tasks[i]=40;
}
for(i=33;i<37;i++){
	tasks[i]=50;
}
for(i=37;i<40;i++){
	tasks[i]=60;
}
for(i=40;i<42;i++){
	tasks[i]=70;
}
for(i=42;i<44;i++){
	tasks[i]=80;
}
tasks[44]=90;
tasks[45]=100;
tasks[46]=110;
tasks[47]=120;


unsigned nbtasks = N;
omp_set_workload(tasks,nbtasks);
//printf("%d",omp_get_max_threads());
#pragma omp parallel for schedule(runtime)
for ( i=0 ; i<N ; i++ ){
	tab[i]=(i*2);
	}
	
	for(i=0;i<N;i++){
		printf("%d ",tab[i]);
	}
	printf("\n\n");
		
}

