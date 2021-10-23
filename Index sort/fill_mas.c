
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция заполнения массива случайными числами

void fill_mas(double * mas1, double * mas2, int size) 
{
    double number; // Записываемое в массив вещественное число
    int high = 10; // Верхняя граница массива
    int low = -10; // Нижняя граница массива
    FILE * data;
    data = fopen("data.txt", "w");
    for (int i = 0; i < size; i++) 
    {
    // Заполняем массив вещественными числами от -10 до 10 
        number = ( (double)rand() * (high - low) ) / (double)RAND_MAX + low;
        mas1[i] = number;
        mas2[i] = mas1[i];
        fprintf(data, "%lf ", number); // Исходные данные сохраняем в файле data.txt
    }
    fprintf(data, "\n");
    fclose(data);
}