build: main.o fill_mas.o output.o headers.h
	gcc main.o fill_mas.o output.o headers.h

	make clean
main.o: main.c
	gcc -c main.c
fill_mas.o: fill_mas.c
	gcc -c fill_mas.c
output.o: output.c
	gcc -c output.c
	
clean:
	del *.o
	del *.gch