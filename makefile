FLAGS = -Wall -ansi -pedantic
OBJS = heapsort.o mergesort.o insertionsort.o quicksort.o tes.o
EXEC = test

$(EXEC): $(OBJS)
	gcc $(FLAGS) -o $(EXEC) $(OBJS)

$(EXEC).o: $(EXEC).c
	gcc $(FLAGS) -c $(EXEC).c

mergesort.o: mergesort.c
	gcc $(FLAGS) -c mergesort.c

insertsort.o: insertsort.c
	gcc $(FLAGS) -c insertsort.c

quicksort.o: quicksort.c
	gcc $(FLAGS) -c quicksort.c

heapsort.o: heapsort.c
	gcc $(FLAGS) -c heapsort.c

clean: 
	rm -f *.o $(EXEC) $(OBJS)