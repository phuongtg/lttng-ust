CC=gcc
CFLAGS=-O3 -Wall
LFLAGS=-lpthread -lust

all: bench1 bench2

bench1: bench.c
	$(CC) $(CFLAGS) $(LFLAGS) -o bench1 bench.c
bench2: bench.c
	$(CC) $(CFLAGS) $(LFLAGS) -DMARKER -o bench2 bench.c


clean:
	rm -f *.o bench1 bench2
