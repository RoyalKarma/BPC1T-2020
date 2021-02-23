#include <iostream>
#include <math.h>
#include "Body2d.h"
#define POCET_BODU 10

int indexNejblizsi(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double prov = INT_MAX;
	double vzdalenost;
	int index = 0;

	for (int i = 0; i < velikost; i++)
	{
		vzdalenost = sqrt((referencniX - poleBodu[i][0]) * (referencniX - poleBodu[i][0]) + (referencniY - poleBodu[i][1]) * (referencniY - poleBodu[i][1]));
		if (vzdalenost < prov)
		{
			prov = vzdalenost;
			index = i;
		}
		else if (vzdalenost > prov)
		{
			prov = prov;
		}
		else
		{
			return -1;
		}

	}
	return index;

}
int NejblizsiBody(int velikost, int(*poleBodu)[2], int referencniX, int referencniY, int MaxVzdalenost)
{
	double vzdalenost;

	
	int help [POCET_BODU];
	 
		for (int i = 0; i < velikost; i++)
		{
			vzdalenost = sqrt((referencniX - poleBodu[i][0]) * (referencniX - poleBodu[i][0]) + (referencniY - poleBodu[i][1]) * (referencniY - poleBodu[i][1]));
			if (vzdalenost <= MaxVzdalenost)
			{
				help[i] = 1;
				printf("index bodu v dane max vzdalenost je %d, [%d, %d] \n", i, poleBodu[i][0], poleBodu [i][1]);

			}
			else if (vzdalenost > MaxVzdalenost )
			{
				help[i] = 0;
			}
			else
			{
				return -1;
			}

		}
		
	return 0;


}

double prumernaVzdalenost(int velikost, int(*poleBodu)[2], int referencniX, int referencniY)
{
	double vzdalenost;
	double  avrg_distance_help = 0;
	double avrg_distance = 0;
	int pocet = 0;

	for (int i = 0; i < velikost; i++)
	{
		vzdalenost = sqrt((referencniX - poleBodu[i][0]) * (referencniX - poleBodu[i][0]) + (referencniY - poleBodu[i][1]) * (referencniY - poleBodu[i][1]));
		avrg_distance_help = avrg_distance_help + vzdalenost;
			
		pocet++;
	}
	return avrg_distance = avrg_distance_help / pocet;
}
