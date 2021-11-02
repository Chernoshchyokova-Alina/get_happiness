
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция замера времени

void measure_time(int * mas1, int * mas2, int N, double * timing) 
{
    clock_t start, stop; // Переменные начала/конца сортировок
    double duration_bubble_sort, duration_qsort, duration_merge_sort; // Длительность сортировок

 // Измеряем время работы qsort
    start = clock();
    qsort(mas1, N * Pack, sizeof(int), bit_compare);
    stop = clock();
    duration_qsort = (double)(stop - start) / CLOCKS_PER_SEC;
    
 // Если сортировка qsort прошла успешно, записываем время ее работы
    if (check_sort(mas1, N * Pack) == 1) 
    {
        timing[0] = duration_qsort;
    } 
    else 
    {
        timing[0] = -1;
    }

 // Измеряем время работы merge_sort
    start = clock();
    merge_sort(mas2, N * Pack);
    stop = clock();
    duration_merge_sort = (double)(stop - start) / CLOCKS_PER_SEC;
    
 // Если сортировка merge_sort прошла успешно, записываем время ее работы
    if (check_sort(mas2, N * Pack) == 1) 
    {
        timing[1] = duration_merge_sort;
    } 
    else 
    {
        timing[1] = -1;
    }
}