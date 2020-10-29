
all : distanceCal
	pass

# which compiler

CC = gcc

distaceCal : main.o
	$(CC) -c  main.c

main.o : data.h 
	$(CC) -c data.h
