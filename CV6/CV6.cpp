// CV6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctype.h>


char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

int pocetCislic(char varchar[112], int size)
{
	int pocet = 0;

	char* work = varchar;
	for (int i = 0; i < size; i++)
	{
		if (isdigit(varchar[i])) pocet += 1;
	}
	printf("Pocet cislic je: %d\n", pocet);

	return pocet;
}


int pocetPismen(char varchar[112], int size)
{
	int pocet = 0;

	char* work = varchar;
	for (int i = 0; i < size; i++)
	{
		if (isalpha(work[i])) pocet += 1;
	}
	printf("Pocet pismen je %d\n", pocet);

	return pocet;
}

int main()
{

	pocetPismen(text, 112);
	pocetCislic(text, 112);

	return 0;
}



