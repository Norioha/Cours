all: main 

bubble.o: bubble_sort.c bubble_sort.h
	gcc -Wall -c -Wextra bubble_sort.c

cocktail.o: cocktail_sort.c cocktail_sort.h
	gcc -Wall -c  -Wextra cocktail_sort.c

insertion.o: insertion_sort.c insertion_sort.h
	gcc -Wall -c  -Wextra insertion_sort.c

merge.o : merge_sort.c merge_sort.h
	gcc -Wall -c   -Wextra merge_sort.c


quick.o : quick_sort.c quick_sort.h
	gcc -Wall -c -Wextra quick_sort.c

radix.o :radix_sort.c radix_sort.h
	gcc -Wall -c -Wextra radix_sort.c

selection.o : selection_sort.c selection_sort.h
	gcc -Wall -c -Wextra selection_sort.c

utils.o : utils.c utils.h
	gcc -Wall -c -Wextra utils.c

sort.o : sort.c 
	gcc -Wall -c -Wextra sort.c

main:  sort.o bubble.o cocktail.o insertion.o merge.o quick.o radix.o selection.o utils.o 
	gcc -O3 bubble_sort.o cocktail_sort.o insertion_sort.o merge_sort.o quick_sort.o radix_sort.o selection_sort.o utils.o sort.o -o sort

clean:
	del \f *.o 