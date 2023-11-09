all: main

fractions.o: fractions.c fractions.h 
	gcc -Wall -Wextra -c fractions.c

calculatrice.o : calculatrice.c 
	gcc -Wall -Wextra -c calculatrice.c

main: fractions.o calculatrice.o
	gcc fractions.o calculatrice.o -o main

clean:
	rm -f *.o main