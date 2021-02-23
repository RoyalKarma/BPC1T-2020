
#include <iostream>
#include <math.h>


char Operace;
double a[2], b[2], c[2];

void soucet(double a[2], double b[2], double c[2])
{
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
}
void rozdil(double a[2], double b[2], double c[2])
{
	c[0] = a[0] - b[0];
	c[1] = a[1] - b[1];
}
void nasobeni(double a[2], double b[2], double c[2])
{

	c[0] = a[0] * b[0] - a[1] * b[1];
	c[1] = a[0] * b[1] + a[1] * b[0];

}



void tisk(double c[2])

{

	if (c[1] >= 0) 
	{
		Operace = '+';
	}
	else
	{
		Operace = '-';
		
	}

	printf("Vysledek: %.2lf %c %.2lf j \n", c[0], Operace, c[1]);

}
void tisk2(double c[2])
{
	double z;
	double img;

	z = sqrt(c[0] * c[0] + c[1] * c[1]);
	img = asin((c[1]) / (z));
	
	if (img < 0)
	{
		printf("%lf * (cos(%lf) - j * sin(%lf))\n", z, img, img);

	}
	else
	{
		printf("%lf * (cos(%lf) + j * sin(%lf))\n", z, img, img);
	}
}
int main()
{
	printf("Prvni realna cast:\n");
	scanf_s("%lf", &a[0]);

	printf("Prvni imaginarni cast:\n");
	scanf_s("%lf", &a[1]);

	printf("Druha realna cast:\n");
	scanf_s("%lf", &b[0]);

	printf("Druha imaginarni cast:\n");
	scanf_s("%lf", &b[1]);

	printf("Zadejte operaci(+,-,*): \n");
	scanf_s(" %c", &Operace, 1);

	switch (Operace)
	{
	case '+':
		soucet(a, b, c);
		tisk(c), tisk2(c);
		break;

	case '-':
		rozdil(a, b, c);
		tisk(c), tisk2(c);
		break;
	case'*':
		nasobeni(a, b, c);
		tisk(c), tisk2(c);
		break;

	default:
		printf("Neplatna operace");
		break;

	
	}
	return 0;
}

