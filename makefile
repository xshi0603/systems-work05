all: stringy.o
	gcc stringy.o -o stringy.out

stringy.o: stringy.c stringy.h
	gcc -c stringy.c

clean:
	rm -f *.o
	rm -f *~

run: all
	./stringy.out
