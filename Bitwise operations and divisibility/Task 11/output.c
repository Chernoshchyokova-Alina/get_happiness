 
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Формируем и выводим подмножества

void output (int *mas, int N, int k)
{
   FILE * output;
   output = fopen("output.txt", "w");
   int p;

    // Выводим k-элементные подмножества множества {1, 2, 3, ... , N}:
    fprintf(output, "%d-элементные подмножества:\n", k);

    p = k;
    while (p>=0)
    {
        fprintf(output, "%s", "{");
        for (int i = 0; i < k; i++)
        {
            fprintf(output, "%d", mas[i]);
            if (i < k-1)
            fprintf(output, "%s", ", ");
        }
        fprintf(output, "%s", "}\n");

        if (mas[k - 1] == N)
        {
            p = p - 1;
        }
        
        else
        {
            p = k - 1;
        }

        if (p>=0)
        {
            for (int i = k - 1; i >= p; i--)
            {
                mas[i] = mas[p] + i - p + 1;
            }
        }
    }
}