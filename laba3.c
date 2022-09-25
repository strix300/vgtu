#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE
#define      D       2.54
#define      P       2.32166

void main()
{
	setlocale(LC_ALL, "RUS");
	int dym, pul;
	float result, result2;
	puts("введите число");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов – это %.2f см", dym, result);
	puts("введите число");
	scanf("%d", &pul);
	result2= P * pul;
	printf("%d испанский дюйм – это %.2f см", pul, result2);

		//int L, N;
		//puts("введите число");
		//scanf("%d", &L);
		//printf("Введено число %d\n", L);
		//puts("введите второе число");
		//scanf("%d", &N);
		//printf("Введено число %d\n", N);
		//printf("сумма %d, разность %d, произведение %d, частное %d", N+L, N-L ,N*L , N/L);
