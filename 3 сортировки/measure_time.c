
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция замера времени

void measure_time(double * mas1, double * mas2, double * mas3, int N, double * timing) 
{
    clock_t start, stop; // Переменные начала/конца сортировок
    double duration_bubble_sort, duration_qsort, duration_merge_sort; // Длительность сортировок

 // Измеряем время работы bubble_sort
    start = clock();
    bubble_sort(mas1, N * Pack);
    stop = clock();
    duration_bubble_sort = (double)(stop - start) / CLOCKS_PER_SEC;

 // Если сортировка bubble_sort прошла успешно, записываем время ее работы
    if (check_sort(mas1, N * Pack) == 1)
     {
        timing[0] = duration_bubble_sort;
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
    if (check_sort(mas2, N * Pack) == 1) 
    {
        timing[1] = duration_qsort;
    } 
    else 
    {
        timing[1] = -1;
    }

 // Измеряем время работы merge_sort
    start = clock();
    merge_sort(mas3, N * Pack);
    stop = clock();
    duration_merge_sort = (double)(stop - start) / CLOCKS_PER_SEC;
    
 // Если сортировка merge_sort прошла успешно, записываем время ее работы
    if (check_sort(mas3, N * Pack) == 1) 
    {
        timing[2] = duration_merge_sort;
    } 
    else 
    {
        timing[2] = -1;
    }
}