# Makefile for Midterm I project

CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

all: main1 main2 Time

main1: main1.o pi_leibniz.o
	${CC} $(LFLAGS) -o main1 main1.o pi_leibniz.o

main2: main2.o pi_bbp.o
	${CC} $(LFLAGS) -o main2 main2.o pi_bbp.o

main1.o main2.o: pi_funs.h

clean:
	rm -f *.o

veryclean: clean
	rm -f main1 main2
