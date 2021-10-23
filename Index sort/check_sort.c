
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция проверки успешности сортировки index_sort

int check_sort(double *mas, int *index, int len)
 { 
    for (int i = 0; i < len-1; i++) 
    {
        if (mas[index[i]] > mas[index[i+1]]) 
        {
            return 0; // возвращаем 0, если массив не отсортирован правильно
        }
    }
    return 1;
}