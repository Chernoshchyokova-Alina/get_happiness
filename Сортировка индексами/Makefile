

build: main.o index_sort.o check_sort.o fill_mas.o output.o function_degree.o measure_time.o compare.o headers.h
	gcc main.o index_sort.o check_sort.o fill_mas.o output.o function_degree.o measure_time.o compare.o headers.h

	make clean
main.o: main.c
	gcc -c main.c
index_sort.o: index_sort.c
	gcc -c index_sort.c
check_sort.o: check_sort.c
	gcc -c check_sort.c
fill_mas.o: fill_mas.c
	gcc -c fill_mas.c
output.o: output.c
	gcc -c output.c
function_degree.o: function_degree.c
	gcc -c function_degree.c
measure_time.o: measure_time.c
	gcc -c measure_time.c
compare.o: compare.c
	gcc -c compare.c
	
clean:
	del *.o
	del *.gch