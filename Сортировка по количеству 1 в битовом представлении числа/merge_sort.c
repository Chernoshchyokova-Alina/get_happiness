
//Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h"

// Функция сортировки merge_sort "Сортировка слиянием"

void merge_sort(int *mas, int len) 
{
    // Открываем файл для записи процесса сортировки merge_sort
    FILE * merge_sort_process;
    merge_sort_process = fopen("merge_sort_process.txt", "w");

    // Создаём вспомогательный массив temp для сортировки массива mas
    int temp[mas_len];
    int i, j, k, size, l1, r1, l2, r2;

    // Выписываем исходный массив
    fprintf(merge_sort_process, "%s", "Unsorted mas is: \n");
    for (int i = 0; i < len; i++)
        fprintf(merge_sort_process, "%d ", mas[i]);
    fprintf(merge_sort_process, "\n");

    // Работаем с каждым подмассивом, состоящим из 2,4,8 и так далее элементов исходного
    for (size = 1; size < len; size *= 2) 
    {
        l1 = 0; // Номер самого левого элемента 1,3,5 и т.д., т. е. нечётного подмассива
        k = 0;  // Индекс подмассивов

        // Сортируем каждый подмассив отдельно
        while (l1 + size < len) 
        {
            r1 = l1 + size - 1; // Номер самого правого элемента 1,3,5 и т.д., т. е. нечётного подмассива
            l2 = r1 + 1;        // Номер самого левого элемента 2,4,6 и т.д., т. е. чётного подмассива
            r2 = l2 + size - 1; // Номер самого правого элемента 2,4,6 и т.д., т. е. чётного подмассива

            // Если Номер самого правого элемента последнего подмассива больше или равен длине массива
            if (r2 >= len) 
                r2 = len - 1;

            i = l1;
            j = l2;

            // Заполняем массив temp
            while (i <= r1 && j <= r2) 
            {
                  int count1 = count_bits(mas[i]);
                  int count2 = count_bits(mas[j]);
                if (count1 <= count2)
                    temp[k++] = mas[i++];
                else
                    temp[k++] = mas[j++];
            }

            while (i <= r1)
                temp[k++] = mas[i++];
            while (j <= r2)
                temp[k++] = mas[j++];

            l1 = r2 + 1; // Переход к следующему нечётному подмассиву
        }
        
        // Если остались не сгруппированные в подмассивы элементы, то дописываем их в temp
        for (i = l1; k < len; i++) 
            temp[k++] = mas[i];

        // Присваеваем mas все значения temp
        for (i = 0; i < len; i++)
            mas[i] = temp[i];

        fprintf(merge_sort_process, "%s", "\nSize = ");
        fprintf(merge_sort_process, "%d", size);
        fprintf(merge_sort_process, "%s", "\nElements are: ");
        for (i = 0; i < len; i++)
            fprintf(merge_sort_process, "%d ", mas[i]);
        fprintf(merge_sort_process, "\n");

    }

    fprintf(merge_sort_process, "%s", "\n Sorted with merge_sort mas is: \n");
    for (i = 0; i < len; i++)
        fprintf(merge_sort_process, "%d ", mas[i]);
}