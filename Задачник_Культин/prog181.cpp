// Приветствие
#include <stdio.h>
#include <conio.h>
void main()
{
    char name[15]; // имя 
    char fam[20];  // фамилия
    
    printf("Как Вас зовут?\n");
    printf("Ведите свое имя и фамилию, затем нажмите <Enter>");
    printf("-> ");
    scanf("%s", &name);
    scanf("%s", &fam);
    // функция scanf читает из буфера клавиатуры символы
    // до разделителя - пробела
    printf("Здравствуйте, %s %s!\n", name, fam);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

