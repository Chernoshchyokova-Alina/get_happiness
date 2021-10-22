
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция сортировки индексами

void index_sort(double *mas, int *index, int len) 
{
    int change_help; // Переменная для обмена значениями

 // Заполняем новый массив, состоящий из чисел от 1 до len сортируемого массива mas
    for (int i = 0; i < len; i++)
    {
        index [i] = i;
    }

 //  Осуществляем сортировку индексами:
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
 // Если элемент с большим индексом меньше элемента с меньшим индексом, меняем их индексы местами:
            if (mas[index[j]] >= mas[index[j+1]])
            {
                change_help = index[j];
                index[j] = index[j+1];
                index[j+1] = change_help;
            }
        }
    }
} 