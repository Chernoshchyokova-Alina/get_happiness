build: main.o fill_mas.o count_bits.o output.o in_bits.o function_degree.o headers.h
	gcc main.o fill_mas.o count_bits.o output.o in_bits.o function_degree.o headers.h

	make clean
main.o: main.c
	gcc -c main.c
fill_mas.o: fill_mas.c
	gcc -c fill_mas.c
count_bits.o: count_bits.c
	gcc -c count_bits.c
output.o: output.c
	gcc -c output.c
in_bits.o: in_bits.c
	gcc -c in_bits.c
function_degree.o: function_degree.c
	gcc -c function_degree.c
	
clean:
	del *.o
	del *.gch