// Ток в электрической цепи 
#include <stdio.h>
#include <conio.h>
void main()
{
    float P,U,I; // Мощность, напряжение, ток

    printf("\nТок в электрической цепи\n");
    
    printf("Мощность, Вт -> ");
    scanf("%f", &P);
    printf("Напряжение, В -> ");
    scanf("%f", &U);

    if (U != 0)
    {
       I = P / U;
       printf("Ток в цепи: %5.2f А, I);
    }
    else
       printf("Ошибка! Напряжение не должно быть равно нулю!\n");

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

