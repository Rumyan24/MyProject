// Вычисляет длину строки
#include <stdio.h>
#include <conio.h>
void main()
{
   char st[80]; // введенная строка
   int i = 0;   // длина строки

   puts("\nВведите строку и нажмите <Enter>");
   printf("->");
   gets(st);
   while( st[i++])
       ;

   printf("Длина введенной строки: %i\n", i);
   printf("Для завершения работы нажмите <Enter>");
   getch();
}

