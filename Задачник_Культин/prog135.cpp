// Выводит таблицу умножения на 7 
#include <stdio.h>
#include <conio.h>
void main()
{
    int m;  // число, для которого надо вывести
            // таблицу умножения (множимое)
    int n;  // множитель
    int p;  // произведение

    m = 7;
    printf("\nТаблица умножения на %i\n", m);
    for (n = 1; n<=9; n++)
    {
       p = m * n;
       printf("%ix%i=%i\n", m, n, p);
    }

    printf("\nДля завершения нажмите <Enter>");
    getch(); 
}

