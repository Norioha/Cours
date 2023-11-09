all: main

string.o: mystring.c mystring.h 
	gcc -Wall -Wextra -c mystring.c

main: mystring.o
	gcc mystring.o -o main

clean:
	rm -f *.o main