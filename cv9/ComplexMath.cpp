#include "ComplexMath.h"
#include <iostream>

#include <cmath>

#define PI 3.14156

struct complex x;

struct complex operace(struct complex a, struct complex b, enum typOperace typ)
{

	switch (typ) 
	{
	case 1:
		a.real = a.real + b.real;
		a.imag = a.imag + b.imag;
		break;
	case 2:
		a.real = a.real - b.real;
		a.imag = a.imag - b.imag;
		break;
	case 3:
		a.real = a.real * b.real - a.imag * b.imag;
		a.imag = a.real * b.imag + a.imag * b.real;
		break;
	default:
		printf ("Neplatna operace. Pouzijte soucet, soucin nebo rozdil\n");
		break;
	}

	return a;
}

int porovnani(struct complex a, struct complex b)
{
	double velkostA;
	double velkostB;

	velkostA = sqrt((a.real) * (a.real) + (a.imag * a.imag));
	velkostB = sqrt((b.real * b.real) + (b.imag * b.imag));

	if (abs(velkostA) > abs(velkostB))
		return 1;
	if (abs(velkostA) < abs(velkostB))
		return -1;
	return 0;

}

void tisk(struct complex a, enum formatZobrazeni format)
{
	char zn = '\0';

	switch (format) 
	{
	case algebraicky:
		if (a.imag >= 0) { zn = '+'; }
		printf("%.3lf%c%.3lfj\n", a.real, zn, a.imag);
		break;
	case geometricky:
	
		x.real = sqrt((a.real) * (a.real) + (a.imag * a.imag));
		if (a.imag > 0 && a.real > 0)
			x.imag = atan(abs(a.imag / a.real));
		else if (a.imag > 0 && a.real < 0)
			x.imag = PI - atan(abs(a.imag / a.real));
		else if (a.imag < 0 && a.real < 0)
			x.imag = -(PI - atan(abs(a.imag / a.real)));
		else
			x.imag = -atan(abs(a.imag / a.real));

		printf("%.3lf * e^j%.0lfdeg\n", x.real, x.imag * 180 / PI);

		break;
	default:
		printf("Neplatna operace");
		break;
	}





}