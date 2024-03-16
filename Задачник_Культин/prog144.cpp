// Электронные часы
#include <stdio.h>
#include <conio.h>
#include "dos.h"    // для доступа к delay
void main()
{
    int min,sec; // минуты, секунды
    clrscr();      // очистить экран
    _setcursortype(_NOCURSOR);  // убрать курсор
    printf("Чтобы остановить таймер, нажмите любую клавишу");
    for (min = 0; min <= 2; min++)
   {
      for (sec = 0; sec <= 59; sec++)
      {
        delay(1000);     // задержка 1000 ms
        gotoxy(1,3);     // курсор в 1-ую колонку 1-ой строки
        printf("%i:%2i", min, sec);
        if (kbhit()) break;
      }
      if (kbhit()) break;
    }
    _setcursortype(_NORMALCURSOR);
    getch(); // клавиша, остановившая часы
    printf("\nДля завершения нажмите <Enter>");
    getch();
}

