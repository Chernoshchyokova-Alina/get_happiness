
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция сравнения для qsort

int compare(const void * a, const void * b) 
{
   double arg1 = *(const double*)a;
   double arg2 = *(const double*)b;
 
   if (arg1 < arg2) return -1;
   if (arg1 > arg2) return 1;
   return 0;
}