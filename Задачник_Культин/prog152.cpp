// игра "Угадай число"
#include <conio.h> 
#include <stdlib.h>  // для доступа к srand
#include <time.h>
void main()
{
   int comp;   // задуманное число
   int igrok;  // вариант игрока
   int n;      // количество попыток
   time_t t;   // текущее время - для инициализации
               // генератора случайных чисел


   srand((unsigned) time(&t));
   comp = rand() % 10 +1 ;     // число от 1 до 10

   clrscr();
   cprintf("\n\rКомпьютер \"задумал\" число от 1 до 10.\n\r");
   cprintf("Вы должны его угадать за пять попыток");
   n = 0;
   do {
    cprintf("\n\r->");
    cscanf("%i",&igrok);
    n++;
   }  while ((igrok != comp)&&(n < 3));

   if (igrok == comp)
   {
      textcolor(RED+BLINK);
      cprintf("\n\rВЫ ВЫИГРАЛИ!");
   }
   else
   {
      textcolor(GREEN);
      cprintf("\n\rВы проиграли.);
      cprintf("Компьютер задумал число %d",comp);
   }
   textcolor(LIGHTGRAY);
   cprintf("\n\rДля завершения нажмите любую клавишу...");
   getch();getch();
}

