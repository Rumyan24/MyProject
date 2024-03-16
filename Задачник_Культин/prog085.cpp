// Проверяет, является ли год високосным
#include <stdio.h>
#include <conio.h>
void main()
{
   int year;
   int r;    // остаток от деления year на 4

   printf("Введите год, например 2001, и нажмите <Enter>");
   printf("->");
   scanf("%i", &year);
   r = year % 4;
   if ( r )
    printf("%i год - не високосный\n", year);
   else
    printf("%i год - високосный\n", year);

   printf("\nДля завершения нажмите <Enter>");
   getch();
}

