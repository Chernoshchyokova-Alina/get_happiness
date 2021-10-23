
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция проверки успешности сортировки qsort

int check_sort_qsort(double *mas, int len)
 { 
    for (int i = 0; i < len-1; i++) 
    {
        if (mas[i] > mas[i+1]) 
        {
            return 0; // возвращаем 0, если массив не отсортирован правильно
        }
    }
    return 1;
}