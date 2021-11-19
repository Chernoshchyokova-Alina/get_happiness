
/* Задачи на битовые операции и делимость
   №11 Вывести в файл все k-элементные подмножества множества {1, 2, 3, ... , N}

   Чернощёкова Алина Фёдоровна, группа 112 */

#include "headers.h" // Подключаем другие функции
 
int main(void)
{
    int k, N;
    int mas [128000]; // Массив для чисел последовательности {1, 2, 3, ... , N}

    // Считываем данные
    printf ("You have: {1, 2, 3, ... , N}\n");
    printf ("Enter N:\n");
    scanf ("%d", &N);

    printf ("How many numbers do you want to be included in one subset?\n");
    scanf ("%d",&k);

    // Формируем множество {1, 2, 3, ... , N}
    fill_mas(N, mas);

    // Формируем и выводим подмножества
    output(mas, N, k);

    return 0;
}