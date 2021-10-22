
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция замера времени

void measure_time(double * mas1, double * mas2, int N, double * timing) 
{
    clock_t start, stop; // Переменные начала/конца сортировок
    double duration_bubble_sort, duration_qsort; // Длительность сортировок

 // Измеряем время работы bubble_sort
    start = clock();
    bubble_sort(mas1, N);
    stop = clock();
    duration_bubble_sort = (double)(stop - start) / CLOCKS_PER_SEC;

 // Если сортировка bubble_sort прошла успешно, записываем время ее работы
    if (check_sort(mas1, N) == 1)
     {
        timing[0] = duration_bubble_sort;
    }
    else 
    {
        timing[0] = -1;
    }

 // Измеряем время работы qsort
    start = clock();
    qsort(mas2, N, sizeof(double), compare);
    stop = clock();
    duration_qsort = (double)(stop - start) / CLOCKS_PER_SEC;
    
 // Если сортировка qsort прошла успешно, записываем время ее работы
    if (check_sort(mas2, N) == 1) 
    {
        timing[1] = duration_qsort;
    } 
    else 
    {
        timing[1] = -1;
    }
}