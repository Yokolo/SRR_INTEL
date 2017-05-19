all: test_srr

test_srr.o: test_srr.c
	clang -fopenmp -c test_srr.c

test_srr: test_srr.o
	clang -o test_srr test_srr.o /home/loic/lib/libiomp5.so

clean : 
	rm *.o test_srr
