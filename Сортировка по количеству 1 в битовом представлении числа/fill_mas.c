
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция заполнения массива случайными числами

void fill_mas(int * mas1, int * mas2, int size) 
{
    int number; // Записываемое в массив целое число
    int high = -1600; // Верхняя граница массива
    int low = 1600; // Нижняя граница массива
    FILE * data;
    data = fopen("data.txt", "w");
    for (int i = 0; i < size; i++) 
    {
    // Заполняем массив целыми числами от -1600 до 1600
        number = ( (int)rand() * (high - low) ) / (int)RAND_MAX + low;
        mas1[i] = number;
        mas2[i] = mas1[i];
        fprintf(data, "%d ", number); // Исходные данные сохраняем в файле data.txt
    }
    fprintf(data, "\n");
    fclose(data);
}