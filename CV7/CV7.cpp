// CV7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Body2d.h"
#define POCET_BODU 10
#include <math.h>




int main()
{
	int body[POCET_BODU][2] =
	{ 5, 10,
	-14, 2,
	45, 4,
	-9, 8,
	58, -3,
	47, 5,
	-18, -86,
	75, 7,
	-25, 51,
	17, 98 };

	int X;
	int Y;
	int index = 0;
	printf("Zadejte hodnotu souradnic X a Y: \n");
	scanf_s("%d%d", &X, &Y);
	
	printf("Index bodu nejblize je %d, prum. vzdalenost je: %lf", indexNejblizsi(POCET_BODU, body, X, Y), prumernaVzdalenost(POCET_BODU, body, X, Y));
}