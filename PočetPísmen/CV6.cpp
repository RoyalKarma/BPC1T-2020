// CV6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctype.h>


char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
char* ptr;
int size;

int pocetCislic(char *ptr)
{
	int pocet = 0;

	for (int i = 0; i < size; i++)
	{
		if (isdigit(ptr[i])) pocet += 1;
	}
	printf("Pocet cislic je: %d\n", pocet);

	return pocet;
}


int pocetPismen(char *ptr)
{
	int pocet = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (isalpha(ptr[i])) pocet += 1;
	}
	printf("Pocet pismen je %d\n", pocet);

	return pocet;
}
int maxDelkaSlova(char* ptr) 
{
	int pocet = 0;
	int nejvetsi = 0;

	for (ptr; *ptr != 0; ptr++) 
	{
		if (isspace(*ptr) || ispunct(*ptr))
		{
			if (pocet > nejvetsi) 
			{
				nejvetsi = pocet;
			}
			pocet = 0;
		}
		else pocet += 1;

	}
	printf("Nejdelsi slovo ma %d pismen\n", nejvetsi);

	return nejvetsi;
}


int main()
{
	size = strlen(text);

	pocetPismen(text);
	pocetCislic(text);
	maxDelkaSlova(text);


	return 0;
}



