
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция сравнения для qsort

int bit_compare(const void * a, const void * b) 
{
   int arg1 = *(const int*)a;
   int arg2 = *(const int*)b;
   int count1, count2; // Счётчики 
  
   count1 = count_bits(arg1); // Считаем количество единиц в битовом представлении одного числа
   count2 = count_bits(arg2); // Считаем количество единиц в битовом представлении другого числа

   if (count1 < count2 ) return -1; // Если число 1 в битовом представлении первого числа меньше, возвращаем -1
   if (count1 > count2) return 1; // Если число 1 в битовом представлении второго числа больше, возвращаем 1
   
   return 0;
}