all: app

triage.o : triage.c triage.h
	gcc -Wall -Wextra -c triage.c -lm

main.o: main.c 
	gcc -Wall -Wextra -c main.c -lm

app : triage.o main.o
	gcc triage.o main.o -o app -lm
clean:
	rm -f *.o 