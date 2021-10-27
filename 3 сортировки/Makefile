

build: main.o bubble_sort.o check_sort.o fill_mas.o output.o merge_sort.o function_degree.o measure_time.o compare.o headers.h
	gcc main.o bubble_sort.o check_sort.o fill_mas.o output.o merge_sort.o function_degree.o measure_time.o compare.o headers.h

	make clean
main.o: main.c
	gcc -c main.c
bubble_sort.o: bubble_sort.c
	gcc -c bubble_sort.c
check_sort.o: check_sort.c
	gcc -c check_sort.c
fill_mas.o: fill_mas.c
	gcc -c fill_mas.c
output.o: output.c
	gcc -c output.c
merge_sort.o: merge_sort.c
	gcc -c merge_sort.c
function_degree.o: function_degree.c
	gcc -c function_degree.c
measure_time.o: measure_time.c
	gcc -c measure_time.c
compare.o: compare.c
	gcc -c compare.c
	
clean:
	del *.o
	del *.gch