
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция вывода результата

void output(double * timing, int N, double *mas1, double *mas2) 
{
    FILE * output;
    output = fopen("output.txt", "w");

    printf("Result for %d elements:\n", N * Pack);
    printf("\n");

 // Выводим время работы bubble_sort
    printf("The duration of bubble_sort:\n");
    if (timing[0] == -1) 
    {
        printf("The sorting is failed\n");
    } 
    else
    {
        printf("%lf seconds\n", timing[0]);
    }
 // Выводим в файл массив, отсортированный с помощью функции медленной сортировки "Пузырьковая сортировка"
    fprintf(output, "%s", "The massiv sorted with bubble_sort \n");
    for (int i = 0; i < N * Pack; i++) 
    {
        fprintf(output, "%lf ", mas1[i]); 
    }
    fprintf(output, "\n");

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

 // Выводим в файл массив, отсортированный с помощью библиотечной функции qsort
    fprintf(output, "%s", "The massiv sorted with qsort: \n");
    for (int i = 0; i < N * Pack; i++) 
    {
        fprintf(output, "%lf ", mas2[i]); 
    }
    fprintf(output, "\n");
}