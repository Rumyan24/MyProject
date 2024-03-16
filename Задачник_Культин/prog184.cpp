// Посимвольный вывод сообщения 
#include <stdio.h>
#include <conio.h>
#include "dos.h" // для доступа к функции delay
void main()
{
    char msg[] = "\n\rПриветствую великого программиста!\0";
    int i;       // номер символа

    i = 0;
    while(msg[i])
    {
       putch(msg[i++]);
       delay(150);
    }

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

