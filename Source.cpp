#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE
#define D 2.54
#define P 2.32166

void main()
{
	setlocale(LC_ALL, "RUS");
	int dym, pul;
	float result, result2;
	puts("������� �����");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d ������ � ��� %.2f ��", dym, result);
	puts("������� �����");
	scanf("%d", &pul);
	result2 = P * pul;
	printf("%d ��������� ���� � ��� %.2f ��", pul, result2);

	//int L, N;
	//puts("������� �����");
	//scanf("%d", &L);
	//printf("������� ����� %d\n", L);
	//puts("������� ������ �����");
	//scanf("%d", &N);
	//printf("������� ����� %d\n", N);
	//printf("����� %d, �������� %d, ������������ %d, ������� %d", N+L, N-L ,N*L , N/L);
}