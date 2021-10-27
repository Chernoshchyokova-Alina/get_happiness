
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция медленной сортировки "Пузырьковая сортировка"

void bubble_sort(double *mas, int len) 
{
    double change_help; // Переменная для обмена значениями
    for (int i = 0 ; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1 ; j++) 
        {  
             if(mas[j] > mas[j+1]) 
              {
                  change_help = mas[j];
                  mas[j] = mas[j+1];
                  mas[j+1] = change_help; 
              }
                   
        }
    }
} 