
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция проверки успешности сортировки

int check_sort(int *mas, int len)
 { 
    for (int i = 0; i < len-1; i++) 
    {
        int count1 = count_bits(mas[i]); // Количество 1 в битовом представлении элемента массива
        int count2 = count_bits(mas[i+1]); // Количество 1 в битовом представлении последующего элемента массива
        if (count1 > count2) 
        {
            return 0; // возвращаем 0, если массив не отсортирован правильно
        }
    }
    return 1;
}