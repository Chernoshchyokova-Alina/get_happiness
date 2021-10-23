
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция вывода результата

void output(double * timing, int N) 
{

    printf("Result for %d elements:\n", N * Pack);
    printf("\n");

 // Выводим время работы index_sort
    printf("The duration of index_sort:\n");
    if (timing[0] == -1) 
    {
        printf("The sorting is failed\n");
    } 
    else
    {
        printf("%lf seconds\n", timing[0]);
    }

 // Выводим время работы qsort
    printf("The duration of qsort:\n");
    if (timing[1] == -1) 
    {
        printf("The sorting is failed\n");
    } 
    else 
    {
        printf("%lf seconds\n", timing[1]);
    }
    printf("\n");
}