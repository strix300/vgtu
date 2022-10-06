#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "RUS");
	int m, t, S;
	scanf("%d", &m);
	scanf("%d", &t);
	scanf("%d", &S);
	float v = (float) (t * S) / m;
	printf("скоросоть поезда %f метров в минуту", v);

	//int n;
	//scanf("%d", &n);
	//int a = n / 100;
	//int b = n % 10;
	//int c = (n % 100) / 10;
	//printf("Последняя цифра %d, первая - %d, сумма цифра %d", b, a, a + b + c);


	//int a = 11;
	//int b = 3;
	//int x = a/b;
	//float y =(float) a/b;
	//double z=(double) a/b;
	//x = a / b;
	//y = a / b;
	//z = a / b;
	//printf("%d %f %lg", x, y, z);

	//int i;
	//char c;
	//float f;
	//double d;
	//scanf_s("%c", &c);
	//scanf_s("%d", &i);
	//scanf_s("%f", &f);
	//scanf_s("%lg", &d);
	//printf("%c %d %f %lg", c, i, f, d);

	//char c = '!'
	//int i = 2;
	//float f = 3.14f;
	//double d = 5e-12;
	//printf("%c %d %f %lg", c, i, f, d);
}