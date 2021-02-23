// CV10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include "funkce.h"
int main()
{
	char str[512];
	int a = 0, n = 0, w = 0, s = 0;
	char fname[256];
	
	printf("Zadejte nazev vstupniho souboru: ");
	scanf_s("%s", fname, sizeof(fname));

	FILE* open;
	errno_t errorCode = fopen_s(&open,fname, "r");
	if (open == NULL) {
		perror("Error opening file");
		return(-1);
	}
	while (!feof(open))
	{
		if (fscanf_s(open, "%s", str, 100) > 0)
		{
			a = a + alpha(str);
			n = n + numb(str);
			w = w + numb_of_word(str);
			s = s + sentence(str);
		}
	}


	printf("Pocet pismen je %d , pocet cisel je %d , pocet slov je %d, pocet vet je %d\n", a, n, w, s);
	char fvystup[256];
	printf("Zadejte nazev vystupniho souboru: ");
	scanf_s("%s", fvystup, sizeof(fvystup));
	FILE* end;
	errno_t errorCode1 = fopen_s(&end, fvystup, "w");
	if (end == NULL)
	{
		perror("Error opening file");
		return(-1);
	}
	fprintf(end, "Pocet pismen je %d, pocet cisel je %d a pocet slov je %d, pocet vet je %d\n", a, n, w, s);
	fclose(end);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
