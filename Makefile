all: program

program: main.o list.o node.o
	gcc -o program main.o list.o node.o

 main.o: main.c list.h
	gcc -c  main.c 

list.o: list.c list.h
	gcc -c list.c

node.o: node.c node.h 
	gcc -c node.c

clean: 
	rm -f program *.o