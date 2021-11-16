
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция вывода результата

void output(double * timing, int N, int *mas1, int *mas2, int *bits) 
{
    FILE * output;
    output = fopen("output.txt", "w");

    printf("\n");
    printf("Result for %d elements:\n", N * Pack);

 // Выводим время работы qsort
    printf("\n");
    printf("The duration of qsort:\n");
    if (timing[0] == -1) 
    {
        printf("The sorting is failed\n");
    } 
    else 
    {
        printf("%lf seconds\n", timing[0]);
    }
    printf("\n");

 // Выводим в файл массив, отсортированный с помощью библиотечной функции qsort
    fprintf(output, "%s", "The massiv sorted with qsort: \n");
    fprintf(output, "%s", "The number, bit representation of the number, the number of '1' in bit representation of the number:\n");
    for (int i = 0; i < N * Pack; i++) 
    {
     // Выводим число
        fprintf(output, "%d, ", mas1[i]);

     // Выводим битовое представление числа
        print_bits(mas1[i], bits); 
        for (int j = 0; j < 32; j++) 
        {
            fprintf(output, "%d", bits[j]);
            if (j==7 || j==15 || j==23)
                {
                    fprintf(output, " ");
                }
        }
        fprintf(output, ", ");

     // Выводим количество 1 в битовом представлении числа
        int count = count_bits(mas1[i]);
        fprintf(output, "%d\n", count);
    }
    fprintf(output, "\n");

    // Выводим время работы merge_sort
    printf("The duration of merge_sort:\n");
    if (timing[1] == -1) 
    {
        printf("The sorting is failed\n");
    } 
    else 
    {
        printf("%lf seconds\n", timing[1]);
    }
    printf("\n");

 // Выводим в файл массив, отсортированный с помощью merge_sort
    fprintf(output, "%s", "The massiv sorted with merge_sort: \n");
    fprintf(output, "%s", "The number, bit representation of the number, the number of '1' in bit representation of the number:\n");
    for (int i = 0; i < N * Pack; i++) 
    {
     // Выводим число
        fprintf(output, "%d, ", mas2[i]);
        print_bits(mas2[i], bits);

     // Выводим битовое представление числа
        for (int j = 0; j < 32; j++) 
        {
            fprintf(output, "%d", bits[j]);
            if (j==7 || j==15 || j==23)
                {
                    fprintf(output, " ");
                }
        }
        fprintf(output, ", ");

     // Выводим количество 1 в битовом представлении числа
        int count = count_bits(mas2[i]);
        fprintf(output, "%d\n", count);
    }
    fprintf(output, "\n");
}