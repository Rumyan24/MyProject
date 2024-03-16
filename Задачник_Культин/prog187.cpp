// Преобразование прописных букв в строчные
#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned char st[80];  // строка текста
    int i;                 // номер обрабатываемого символа

    printf("\nВведите строку текста и нажмите <Enter>");
    printf("->");
    gets(st);
    i = 0;
    while ( st[i] )
    {
      if ((st[i] >= 'a' && st[i] <= 'z') ||
      (st[i] >= 'а' && st[i] <= 'п'))
        st[i] -= 32;
      else if (st[i] >= 'р' && st[i] <= 'я')
         st[i] -= 80;
      i++;
    }
    printf("\n%s\n", st);

    printf("\nДля завершения нажмите <Enter>");
    getch();
}

