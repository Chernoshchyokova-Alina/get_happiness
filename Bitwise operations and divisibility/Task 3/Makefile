build: main.o find_numbers.o print_bits.o headers.h
	gcc main.o find_numbers.o print_bits.o headers.h

main.o: main.c
	gcc -c main.c
find_numbers.o: find_numbers.c
	gcc -c find_numbers.c
print_bits.o: print_bits.c
	gcc -c print_bits.c
	
clean:
	del *.o
	del *.gch