
// Чернощёкова Алина Фёдоровна, группа 112

#include "headers.h" // Подключаем другие функции
 
int main(void)
{
    int n; // Количество чисел, которые нужно найти
    int bits[32]; // Массив из 32 элементов для записи битового представления числа

    printf("How many numbers do you want to be found? \n");
    scanf("%d", &n);

    find_numbers(n, bits);

    return 0;
}