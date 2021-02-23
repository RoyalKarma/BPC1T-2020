// cv9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ComplexMath.h"

struct complex a;
struct complex b;
struct complex v; 
int prov;
typOperace operant;
formatZobrazeni format;

int main()
{
	printf("Zadejte typ operace 1=soucet,2=rozdil,3=soucin.\n");
	scanf_s("%d", &operant);

	printf("Zadejte prvni realnou a imaginarni slozku.\n");
	scanf_s("%lf%lf", &a.real, &a.imag);

	printf("Zadejte druhou realnou a imaginarni slozku.\n");
	scanf_s("%lf%lf", &b.real, &b.imag);

	v = operace(a, b, operant);
	prov = porovnani( a, b);
	printf("Vysledek porovnani je: %d\n", prov);

	tisk(v, algebraicky);
	tisk(v, geometricky);

	return 0;
}


