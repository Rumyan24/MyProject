// Выводит таблицу функции
#include <stdio.h>
#include <conio.h>
void main()
{
    float x,dx;      // аргумент и его приращениение
    float x1,x2;     // диапазон изменения аргумента
    float y;         // значение функции

    x1 = -4;
    x2 = 4;
    dx = 0.5;
    x = x1;
    printf("--------------\n");
    printf("   x  |   y\n");
    printf("--------------\n");
    while (x < x2)
    {
       y = x*x + 2;
       printf("%3.2f  | %3.2f\n", x, y);
       x += dx;
    }
    printf("--------------\n");

    printf("\nДля завершения нажмите <Enter>");
    getch(); 
}

