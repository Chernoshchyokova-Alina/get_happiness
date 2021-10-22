
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция замера времени

void measure_time(double * mas1, double * mas2, int N, double * timing, int *index) 
{
    clock_t start, stop; // Переменные начала/конца сортировок
    double duration_index_sort, duration_qsort; // Длительность сортировок

 // Измеряем время работы index_sort
    start = clock();
    check_sort(mas1, index, N * Pack);
    stop = clock();
    duration_index_sort = (double)(stop - start) / CLOCKS_PER_SEC;

 // Если сортировка index_sort прошла успешно, записываем время ее работы
    if (check_sort(mas1, index, N * Pack) == 1)
     {
        timing[0] = duration_index_sort;
    }
    else 
    {
        timing[0] = -1;
    }

 // Измеряем время работы qsort
    start = clock();
    qsort(mas2, N * Pack, sizeof(double), compare);
    stop = clock();
    duration_qsort = (double)(stop - start) / CLOCKS_PER_SEC;
    
 // Если сортировка qsort прошла успешно, записываем время ее работы
    if (check_sort(mas2, index, N * Pack) == 1) 
    {
        timing[1] = duration_qsort;
    } 
    else 
    {
        timing[1] = -1;
    }
}