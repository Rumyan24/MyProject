// Выводит название дня недели
#include <stdio.h>
#include <conio.h>
void main()
{
   int nd; // номер дня недели

   puts("\nВведите номер дня недели (1..7");
   printf("->");
   scanf("%i", &nd);
   switch (nd)
   {
     case 1:  puts("Понедельник"); break;
     case 2:  puts("Вторник");     break;
     case 3:  puts("Среда");       break;
     case 4:  puts("Четверг");     break;
     case 5:  puts("Пятница");     break;
     case 6:  puts("Суббота");     break;
     case 7:  puts("Воскресенье"); break;
     
        default: puts("Число должно быть в диапазоне 1..7");
   }
   getch();
}

