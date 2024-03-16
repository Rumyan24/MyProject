// Контроль веса
#include <stdio.h>
#include <conio.h>
void main()
{
     float w;   // вес
     float h;   // рост
     float opt; // оптимальный вес
     float d;   // отклонение от оптимального веса

     printf("\Введите в одной строке, через пробел,\n");
     printf("рост (см) и вес (кг), затем нажмите <Enter>");
     printf("->");
     scanf("%f%f", &h, &w);
     opt = h - 100;
     if (w == opt)
       printf("Ваш вес оптимален!");
     else
      if (w < opt)
       {
         d = opt - w;
         printf("Вам надо поправиться на %2.2f кг.\n", d);
       }
      else
       {
         d = w - opt;
         printf("Вам надо похудеть на %2.2f кг.\n", d);
       }

     printf("\nДля завершения нажмите <Enter>");
     getch();
}

