// ���᫥��� �।��� (�� ������) ⥬������� ������
#include <stdio.h>
#include <conio.h>
void main()
{
    // �������� ���� ������ - ���ᨢ ��ப���� ����⠭�
    char *day[] = {"�������쭨�","��୨�","�।�",
           "��⢥�","��⭨�","�㡡��","����ᥭ�"};
    float t[7];    // ⥬������
    float sum;     // �㬬� ⥬������ �� ������
    float sred;    // �।��� ⥬������ �� ������
    int i;

    printf("\n������ ⥬������� ������:\n");
    for (i = 0; i <= 6; i++)
    {
       printf("%s->", day[i]);
       scanf("%f", &t[i]);
       sum += t[i];
    }
    sred = sum / 7;
    printf("\n�।��� ⥬������ �� ������: %2.1f", sred);

    printf("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}

