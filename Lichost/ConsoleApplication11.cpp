// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int rok;
	printf("Rok: ");
	scanf_s("%d", &rok);

	int JeLichy(int rok);
	{
		int sudost = rok % 2;
		if (sudost == 0)
		{
			printf("\nRok je sudy");
			return 0;
		}
		else
		{
			printf("\Rok je lichy");
			return 0;
		}
	}
}
