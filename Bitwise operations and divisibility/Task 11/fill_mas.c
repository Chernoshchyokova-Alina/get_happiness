
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Формируем множество {1, 2, 3, ... , N}

void fill_mas(int N, int *mas)
{
    for (int i = 0; i < N; i++)
    {
        mas[i] = i + 1;
    }
}