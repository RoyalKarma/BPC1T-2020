#include <iostream>
#include <math.h>
#include "Body2d.h"


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
