// Решение квадратного уравнения 
#include <stdio.h>
#include <conio.h>
#include "math.h"
void main()
{
   float a,b,c;    // коэффициенты уравнения
   float x1,x2;    // корни уравнения
   float d;    // дискриминант

   printf("\nРешение квадратного уравнения\n");
   printf("Введите в одной строке значения коэффициентов");
   printf(" и нажмите <Enter>");
   printf("-> ");
   scanf("%f%f%f", &a, &b, &c); // ввод коэффициентов

   d = b*b - 4*a*c;             // дискриминант
   if (d < 0)
      printf("Уравнение не имеет решения\n");
   else {
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);
      printf("Корни уравнения: x1=%3.2f x2=%3.2f\n", x1, x2);
   }

   printf("\nДля завершения нажмите <Enter>");
   getch();
}

