SingleLL_make: main.o LL.o
	cc -o SingleLL_make main.o LL.o
main.o: main.c
	cc -c main.c
LL.o: LL.c
	cc -c LL.c

clean:
	rm -Rf SingleLL_make *.o
