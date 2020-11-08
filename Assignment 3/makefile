CC=g++
CFLAGS= -g -Wall
DEPS = qsort.h heapsort.h hashtable.h
FILES = qsort.cpp heapsort.cpp hashtable.cpp

ass3C: ass3C.cpp ass3B.o ass3A.o $(DEPS) $(FILES)
	$(CC) $(CFLAGS) ass3C.cpp -o ass3C
ass3B: ass3B.cpp qsort.o
	$(CC) $(CFLAGS) ass3B.cpp qsort.o -o ass3B
ass3A: ass3A.cpp qsort.o
	$(CC) $(CFLAGS) ass3A.cpp qsort.o -o ass3A
qsort: qsort.cpp $(DEPS)
	$(CC) $(CFLAGS) qsort.cpp
hashtable: hashtable.cpp $(DEPS)
	$(CC) $(CFLAGS) hashtable.cpp
heapsort: heapsort.cpp $(DEPS)
	$(CC) $(CFLAGS) heapsort.cpp

clean:
	rm *.o