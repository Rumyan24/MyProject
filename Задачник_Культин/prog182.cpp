// Приветствие (посимвольный ввод строки)
#include <stdio.h>
#include <conio.h>
void main()
{
    char name[40]; // имя и отчество пользователя
    char ch;
    int i;

    printf("Как Вас зовут?\n");
    printf("(введите свое имя, отчество и нажмите <Enter>");
    printf("-> ");
    i = 0;
    while ((ch=getch()) != 13 && i < 40) // пока не <Enter>
    {  putch(ch);
       name[i++] = ch;
    }
    name[i] = '\0';
    printf("\nЗдравствуйте, %s!\n", name);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

