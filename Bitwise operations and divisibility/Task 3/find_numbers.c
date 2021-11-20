
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
    fprintf(fin, "%s", "\nFound number\t\t");
    fprintf(fin, "%s", "The bit representation of this number: \n");

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
            if (a==0)
            fprintf(fin, "\t %d\t\t\t", a); 
            else
            fprintf(fin, "\t%d\t\t\t", a); 

            print_bits(a, bits);

            if (a<1000)
            fprintf(fin, "     ");
            else
            fprintf(fin, " ");

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