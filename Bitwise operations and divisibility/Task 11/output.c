 
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Формируем и выводим подмножества

void output (int *mas, int N, int k, int *bits)
{
   FILE * output;
   output = fopen("output.txt", "w");
   
   fprintf(output, "You have: {1, ..., %d}\n", N);
   fprintf(output, "\n");
   
   fprintf(output, "%d-элементные подмножества:\n", k);

   int n = function_degree(2, N)-1;
   
   // Выводим k-элементные подмножества множества {1, ... , N}:
   for (int i = 0; i < n; i++)
   {
       int count = count_bits(mas[i]);

       if (count == k)
       {
           fprintf(output, "%s", "{");

           in_bits(mas[i], bits); 

           for (int j = 0; j < 32; j++) 
           {
               if (bits[j]==1)
               {
                   count--;
                   fprintf(output, "%d", j+1);
                   
                   if (count!=0)
                   fprintf(output, "%s", ", ");
               }
            }
            
            fprintf(output, "%s", "}\n");

        }
    }
}