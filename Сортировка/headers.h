
//Чернощёкова Алина Фёдоровна, группа 112

#include <stdio.h> // Подключаем основную библиотеку 
#include <stdlib.h> // Подключаем библиотеку для функции qsort
#include <time.h> // Подключаем библиотеку для функции clock

#define mas_len 128000 // Максимальная длина генерируемых массивов
#define times 7 // Длина массивов изменяется times раз, т. е. основная программа сработает times+1 раз
#define Pack 1000 // Минимальная длина генерируемых массивов

int compare (const void *a, const void *b); // Функция сравнения для qsort
void bubble_sort(double *mas, int len); // Функция медленной сортировки "Пузырьковая сортировка"
int check_sort(double *mas, int len); // Функция проверки успешности сортировки
void fill_mas(double * mas1, double * mas2, int size); // Функция заполнения массива случайными числами
void output(double * timing, int N, double *mas1, double *mas2); // Функция вывода результата
void measure_time(double * mas1, double * mas2, int N, double * timing); // Функция замера времени
int function_degree(int a, int b); // Функция возведения в степень