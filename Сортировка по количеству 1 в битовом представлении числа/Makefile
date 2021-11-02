

build: main.o check_sort.o fill_mas.o output.o merge_sort.o function_degree.o measure_time.o bit_compare.o count_bits.o print_bits.o headers.h
	gcc main.o check_sort.o fill_mas.o output.o merge_sort.o function_degree.o measure_time.o bit_compare.o count_bits.o print_bits.o headers.h

	make clean
main.o: main.c
	gcc -c main.c
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
bit_compare.o: bit_compare.c
	gcc -c bit_compare.c
count_bits.o: count_bits.c
	gcc -c count_bits.c
print_bits.o: print_bits.c
	gcc -c print_bits.c
	
clean:
	del *.o
	del *.gch