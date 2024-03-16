// Таблица степеней двойки 
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;  // показатель степени
    int x;  // значение 2 в степени n

    printf("\nТаблица степеней двойки\n");
    x = 1;
    for (n = 0; n <= 10; n++)
    {
       printf("%3i%5i\n", n, x);
       x *= 2;
    }

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

