CC=g++
CFLAGS= -g -Wall
DEPS = qsort.h heapsort.h hashtable.h
FILES = qsort.cpp heapsort.cpp hashtable.cpp

##ass3C: ass3C.cpp $(DEPS) $(FILES)
	#$(CC) $(CFLAGS) $(FILES) -o ass3C
#ass3B: ass3B.cpp qsort.o
	#$(CC) $(CFLAGS) ass3B.cpp qsort.o
ass3A: ass3A.cpp qsort.o
	$(CC) $(CFLAGS) ass3A.cpp qsort.o

qsort: qsort.cpp $(DEPS)
	$(CC) $(CFLAGS) qsort.cpp


clean:
	rm *.o