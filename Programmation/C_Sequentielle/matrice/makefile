all : main

matrix.o : matrix.c matrix.h
	gcc -Wall -Wextra -pedantic -fsanitize=address  -Wextra -pedantic -fsanitize=address  -o matrix.o  matrix.c 

main.o : main.c
	gcc -Wall -Wextra -pedantic -fsanitize=address  -Wextra -pedantic -fsanitize=address  -o main.o  main.c 



main: matrix.o main.o
	gcc -Wall -Wextra -pedantic -fsanitize=address  -Wextra -pedantic -fsanitize=address  matrix.o main.o -o executable
