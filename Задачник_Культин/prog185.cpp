// Выводит код символа
#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned char ch;
    // Если ch объявить как char, то буквам русского
    // алфавита будут соответствовать отрицательные числа

    printf("\nВводите символы.\n");
    printf("Для завершения введите точку.\n");
    do {
      ch = getch();
      printf("Символ: %c Код: %i\n", ch, ch);
    } while ( ch != '.');

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

