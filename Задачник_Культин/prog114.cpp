// Выводит таблицу квадратов нечетных чисел
#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 1;  // число
    int y;      // квадрат числа
    int i;      // счетчик циклов

    printf("Таблица квадратов\n");
    printf("-----------------\n");
    printf("Число\tКвадрат\n");
    printf("-----------------\n");
    for (i = 1; i <= 10; i++)
    {
       y = x*x;
       printf("%3i\t%4i\n", x, y);
       x += 2;
    }
    printf("-----------------\n");

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

