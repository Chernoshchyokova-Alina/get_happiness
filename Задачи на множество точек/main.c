
/* Задачи на обработку множества точек.
   Задача №2: множество точек определяет многоугольник. Является ли он выпуклым?

   Чернощёкова Алина Фёдоровна, группа 112 */

#include "headers.h" // Подключаем другие функции

int main (void)
{
    double x[count], y[count]; // Координаты точек

    int count_vertices = 0; // Количество точек данного многоугольника
    double l,m; // Числа для записи координат точек в соответствующие массивы

    // Считываем данные
    FILE*fin; 
	char filename[120]; 

	printf("Enter file name: "); // Вводим имя файла для считывания данных
	scanf("%s", filename); 
	fin = fopen(filename, "r"); 
	if (!fin) // Если файл не открылся, пишем, что файл нельзя открыть, и возвращаем 1
	{ 
		printf("Unable to open %s\n", filename); 
		return 1;
	}

    while (fscanf(fin, "%lf%lf", &l, &m)==2) // Пока можно считать числа из файла 
    { 
        x[count_vertices]=l;
        y[count_vertices]=m;
        count_vertices++;
        if (count_vertices == count) // Если число точек равно размеру массива для координат точек, выходим из цикла while
        {
            break;
        }
    }

    fclose(fin); // Закрываем файл

    Define_the_type(x, y, count_vertices);
    
    return 0;
}