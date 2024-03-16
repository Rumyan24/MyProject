// Удаление начальных пробелов из строки
#include <stdio.h>
#include <conio.h>
#include "string.h"
void main()
{
     unsigned char sst[80];  // строка
     unsigned char dst[80];  // буфер
     int i,j;

     printf("Удаление начальных пробелов\n");
     printf("Введите строку:");

     i=0;
     while ((sst[i] = getch()) != 13)
         putch(sst[i++]);
     sst[i] = '\0';

     i = 0; j = 0;
     // найдем первый символ, отличный от пробела
     while( sst[i] && sst[i] == ' ')
         i++;

     // здесь i - номер первого символа, отличного от пробела
     // скопируем sst в dst
     while (sst[i])
         dst[j++] = sst[i++];
     dst[j] = '\0';

     printf("\nСтрока без начальных пробелов:%s\n",dst);

     printf("\nДля завершения нажмите <Enter>");
     getch();
}

