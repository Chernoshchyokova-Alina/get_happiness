
//Чернощёкова Алина Фёдоровна, группа 112

#include <stdio.h> // Подключаем основную библиотеку 
#include <stdlib.h> // Подключаем библиотеку для функции qsort
#include <time.h> // Подключаем библиотеку для функции clock

#define mas_len 128000 // Максимальная длина генерируемых массивов
#define times 7 // Длина массивов изменяется times раз, т. е. основная программа сработает times+1 раз
#define Pack 1000 // Минимальная длина генерируемых массивов

int bit_compare (const void *a, const void *b); // Функция сравнения для qsort
int check_sort(int *mas, int len); // Функция проверки успешности сортировки
int function_degree(int a, int b); // Функция возведения в степень
int count_bits(int number); // Функция подсчета 1 в битовом представлении числа
void merge_sort(int *mas, int len); // Функция сортировки merge_sort "Сортировка слиянием"
void fill_mas(int * mas1, int * mas2, int size); // Функция заполнения массива случайными числами
void output(double * timing, int N, int *mas1, int *mas2, int *bits); // Функция вывода результата
void measure_time(int * mas1, int * mas2, int N, double * timing); // Функция замера времени
void print_bits(int number, int *bits); // Функция вывода битового представления числа
