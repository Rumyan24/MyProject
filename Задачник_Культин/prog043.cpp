// Выводит стихотворение
#include <conio.h>
void main()
{
   textbackground(BLUE); // цвет фона
   textcolor(LIGHTGRAY); // цвет символов
   clrscr();             // очистить экран
   cprintf("Буря мглою небо кроет\n\r");
   cprintf("Вихри снежные крутя.\n\r");
   cprintf("То как зверь она завоет,\n\r");
   cprintf("То заплачет, как дитя.\n\n\r");
   cprintf("            А.С.Пушкин\n\n\r");
   cprintf("\n\nДля завершения нажмите <Enter>");
   getch();
}

