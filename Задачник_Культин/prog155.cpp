// Вычисление числа "Пи"
#include <stdio.h>
#include <conio.h>
void main()
{
     float p;   // вычисляемое значение Пи
     float t;   // точность вычисления
     int n;     // номер члена ряда
     float el;  // значение члена ряда

     p = 0;
     n = 1;
     el = 1; // начальное значение
     printf("\nЗадайте точность вычисления Пи -> ");
     scanf("%f", &t);
     printf("Вычисление Пи с точностью %f\n",t);
     while (el >= t )
     {
      el = (float) 1 / (2*n -1);
      if ((n % 2) == 0)
        p -= el;
      else p += el;
      n++;
     }
     p = p*4;
     printf("\nЗначение Пи с точностью %f равно %f\n", t, p);
     printf("Просуммировано %i членов ряда.\n", n);

     printf("\nДля завершения нажмите <Enter>");
     getch();
}

