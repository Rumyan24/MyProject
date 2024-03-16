// Скорость бега
#include <stdio.h>
#include <conio.h>
void main()
{
   float s;   // дистанция
   float t;   // время
   float v;   // скорость
   int min;   // минут
   int sek;   // секунд
   float  ts; // время в секундах

   printf("Вычисление скорости бега\n");
   printf("Введите длину дистанции (метров) -> ");
   scanf("%f", &s);
   printf("Введите время (минут.секунд)-> ");
   scanf("%f", &t);

   min = t;
   sek = (t - min) * 100;
   ts = min * 60 + sek;

   v = (s /1000) / (ts / 3600);

   printf("Дистанция: %4.0f м\n", s);
   printf("Время: %i мин %i сек = %4.0f сек\n", min, sek, ts);
   printf("Скорость %2.2f км/час\n", v);

   printf("\nДля завершения нажмите <Enter>");
   getch();
}

