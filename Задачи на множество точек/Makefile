
build: main.o Define_the_type.o headers.h
	gcc main.o Define_the_type.o headers.h

main.o: main.c
	gcc -c main.c
Define_the_type.o: Define_the_type.c
	gcc -c Define_the_type.c
	
clean:
	del *.o
	del *.gch