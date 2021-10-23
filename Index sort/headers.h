
//Чернощёкова Алина Фёдоровна, группа 112

#include <stdio.h> // Подключаем основную библиотеку 
#include <stdlib.h> // Подключаем библиотеку для функции qsort
#include <time.h> // Подключаем библиотеку для функции clock

#define mas_len 64000 // Максимальная длина генерируемых массивов
#define times 6 // Длина массивов изменяется times раз, т. е. основная программа сработает times+1 раз
#define Pack 1000 // Минимальная длина генерируемых массивов

int compare (const void *a, const void *b); // Функция сравнения для qsort
void index_sort(double *mas, int *index, int len); // Функция сортировки индексами
int check_sort(double *mas, int *index, int len); // Функция проверки успешности сортировки index_sort
int check_sort_qsort(double *mas, int len); // Функция проверки успешности сортировки qsort
void fill_mas(double * mas1, double * mas2, int size); // Функция заполнения массива случайными числами
void output(double * timing, int N); // Функция вывода результата
void measure_time(double * mas1, double * mas2, int N, double * timing, int *index); // Функция замера времени
int function_degree(int a, int b); // Функция возведения в степень