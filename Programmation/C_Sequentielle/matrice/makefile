# Définir le compilateur
CC = gcc

# Définir les options de compilation
CFLAGS = -Wall -Wextra -pedantic

# Définir les fichiers objets
OBJS = matrix.o main.o

# Règle par défaut pour créer l'exécutable
all: program

# Règle pour créer l'exécutable
program: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Règle pour compiler matrix.c en matrix.o
matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour compiler main.c en main.o
main.o: main.c matrix.h
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
ifeq ($(OS),Windows_NT)
	del /f /q *.o program.exe
else
	rm -f *.o program
endif