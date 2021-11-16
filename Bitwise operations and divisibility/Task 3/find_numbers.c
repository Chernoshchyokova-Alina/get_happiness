
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция поиска числа, удовлетворяющего условию

void find_numbers(int N, int *bits)
{
    FILE * fin;
    fin = fopen("output.txt", "w");

    int a, j;
    int i, k, l, m = 0;
    
    fprintf(fin, "\nResult for %d elements:\n", N);
    fprintf(fin, "%s", "\nFound number, the bit representation of this number: \n");

    // Выводим найденное число
    for(j = 0; m < N; j++)
    {
        for (i = 0; m < N; i++)
        {
            a = (i<<8) + (j<<16);
            for(k = 7, l = 0; l < 8; k--, l++)
            {
                if((i>>k)&1)
                a += (1<<l);
            }
            fprintf(fin, "%d, ", a); 
            print_bits(a, bits);

            // Выводим битовое представление найденного числа
            for (int j = 0; j < 32; j++) 
            {
                fprintf(fin, "%d", bits[j]);
                if (j==7 || j==15 || j==23)
                {
                    fprintf(fin, " ");
                }
            }
            fprintf(fin, "\n");
            m++;
        }
    }
}