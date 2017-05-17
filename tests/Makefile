all: test_srr

test_srr.o: test_srr.c
	gcc -fopenmp -c test_srr.c

test_srr: test_srr.o
	gcc -o test_srr test_srr.o -L~/lib -liomp5

clean : 
	rm *.o test_srr
