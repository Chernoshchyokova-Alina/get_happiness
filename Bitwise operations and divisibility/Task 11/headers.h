
//Чернощёкова Алина Фёдоровна, группа 112

#include <stdio.h>

// Формируем множество {1, 2, 3, ... , 2^N - 1}
void fill_mas(int N, int *mas); 

// Формируем и выводим подмножества длины k
void output (int *mas, int N, int k, int *bits);

// Считаем количество "1" в битовом представлении числа
int count_bits(int number);

// Функция нахождения обратного битового представления числа
void in_bits(int number, int *bits);

// Функция возведения в степень
int function_degree(int a, int b);