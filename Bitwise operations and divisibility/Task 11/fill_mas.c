
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Формируем множество {1, 2, 3, ... , 2^N - 1}

void fill_mas(int N, int *mas)
{
    int n = function_degree(2, N)-1;

    for (int i = 0; i < n; i++)
    {
        mas[i] = i + 1;
    }
}