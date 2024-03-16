// Проверяет, является ли число простым
#include <stdio.h>
#include <conio.h>
void main()
{
     int n;  // число
     int d;  // делитель
     int r;  // остаток от деления n на d

     printf("Введите целое число-> ");
     scanf("%i", &n);
     d = 2;        // сначала будем делить на два
     do {
        r = n % d;
        if (r != 0) d++;
     }
     while ( r != 0 ); // пока n не разделится на d
     if (d == n)
       printf("%i - простое число" ,n);
     else  printf("%i - не простое число" ,n);

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

