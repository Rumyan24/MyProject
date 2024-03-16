// ASCII таблица кодировки символов
#include <stdio.h>
#include <conio.h>

#define  SM 128  //  0  - символы с кодами 0 - 127
                 // 128 - символы с кодами 128 - 256
void main()
{
    // Если ch объявить как char, то буквам русского
    // алфавита будут соответствовать отрицательные числа
    unsigned char ch;     // символ

    int i,j;

    printf("\nASCII таблица кодировки символов\n");
    for (i = 0; i <= 16; i++) // шестнадцать строк
    {    ch = i + SM;
       for (j = 1; j <= 8; j++) // восемь колонок
       {
          if (( ch <7 || ch >= 14) && ch !=26)
               printf("%3c -%4i", ch, ch);
          else // символы CR,LF,TAB не отображаются
               printf("%3c -     ", ch, ch);
          ch += 16;
       }
       printf("\n");
    }

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

