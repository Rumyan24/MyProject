// Проверяет на четность введенное с клавиатуры число 
#include <stdio.h>
#include <conio.h>
void main()
{
    int n; // введенное пользователем число

    printf("\nВведите целое число и нажмите <Enter>");
    printf("-> ");
    scanf("%i", &n);
    printf("Число %i ");
    if (n % 2 == 0)
       printf("четное.");
    else
       printf("нечетное.");

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

