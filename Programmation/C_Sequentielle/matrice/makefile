# Définir le compilateur
CC = gcc

# Définir les options de compilation
CFLAGS = "-Wall" "-Wextra" "-pedantic" -g -fsanitize=address -fsanitize=leak

# Définir les fichiers objets
OBJS = matrix.o image.o mainMatrix.o

# Règle par défaut pour créer l'exécutable
all: program 

# Règle pour créer l'exécutable
program: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Règle pour compiler matrix.c en matrix.o
matrix.o: matrix.c 
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour compiler image.c en image.o
image.o: image.c 
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour compiler mainMatrix.c en mainMatrix.o
mainMatrix.o: mainMatrix.c 
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
ifeq ($(OS),Windows_NT)
	del /f /q *.o program.exe
else
	rm -f *.o program
endif

