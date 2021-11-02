
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция возведения в степень 

int function_degree(int a, int b) 
{ 
    int number = 1;
    for (int i = 0; i < b; i++) 
    {
        number *= a;
    }
    return number;
}