// Таблица функции y=|x| 
#include <stdio.h>
#include <conio.h>
#include "math.h"

#define  LB -4 // нижняя граница диапазона изменения аргумента
#define  HB  4 // верхняя граница диапазона изменения аргумента
#define  DX  0.5  // приращение аргумента

void main()
{
    float x,y;  // аргумент и значение функции
    int n;      // кол-во точек
    int i;      // счетчик циклов

    printf("\nТаблица значений функции y=|x| \n");
    n = (HB - LB)/DX + 1;
    x = LB;
    for (i = 1; i <= n; i++)
    {
       y = fabs(x);
       printf("%4.2f   %3.2f\n", x, y);
       x += DX;
    }

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

