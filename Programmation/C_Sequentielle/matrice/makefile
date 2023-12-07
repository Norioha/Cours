all : main

matrix.o : matrix.c matrix.h
	gcc -Wall -Wextra -pedantic -fsanitize=address -fsanitize=leak-Wall -Wextra -pedantic -fsanitize=address -fsanitize=leak -o matrix.o  matrix.c 

main.o : main.c
	gcc -Wall -Wextra -pedantic -fsanitize=address -fsanitize=leak-Wall -Wextra -pedantic -fsanitize=address -fsanitize=leak -o main.o  main.c 



main: matrix.o main.o
	gcc -Wall -Wextra -pedantic -fsanitize=address -fsanitize=leak-Wall -Wextra -pedantic -fsanitize=address -fsanitize=leak matrix.o main.o -o executable
