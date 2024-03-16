// Определение времени года по номеру месяца 
#include <stdio.h>
#include <conio.h>
void main()
{
   int month; // номер месяца

   puts("\nВведите номер месяца (число от 1 до 12)");
   printf("-> ");
   scanf("%i", &month);
   if (month < 1 && month > 12) 
       printf("Число должно быть от 1 до 12");
   else if (month >= 3 && month <= 5)
        printf("Весна");
    else if (month >= 6 && month <= 8)
         printf("Лето");
         else if (month >= 9  && month <= 11)
              printf("Осень");
          else printf("Зима");

    printf("\n\nДля завершения нажмите <Enter>");
    getch();
}

