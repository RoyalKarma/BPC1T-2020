// ul12.cpp : Defines the entry point for the console application.
//
#pragma warning(disable:4996)//proti warningom
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>;
struct t_alba
{
	char interpret[30];
	char nazov[30];
	int rok;
	struct t_alba* dalsi;
};
struct t_alba* prvni = NULL; // globalni ukazatel na prvni Album

int poradie(char arr[50], char arr2[50]) {
	int ret;
	ret = strcmp(arr, arr2);

	if (ret < 0)
	{
		//printf("str1 is less than str2");
		return 1;
	}
	else if (ret > 0)
	{
		//printf("str2 is less than str1");
		return 0;
	}
	else
	{
		//printf("str1 is equal to str2");
		return 2;
	}

}

void show(char pismeno = NULL) // tisk alb
{
	if (pismeno != NULL) { pismeno = toupper(pismeno); }
	struct t_alba* aktAlbum = prvni; // ukazatel na aktualni Album
	int ai = 0;
	while (aktAlbum) // prochazeni seznamu
	{
		//printf("pismeno je:%c a prpI:%c\n",pismeno,aktAlbum->interpret[0]);
		if (pismeno == NULL || pismeno == aktAlbum->interpret[0]) {
			printf("%s - %s   r%d\n", aktAlbum->interpret, aktAlbum->nazov, aktAlbum->rok); // tisk radku
			ai++;
		}
		aktAlbum = aktAlbum->dalsi; // posun na dalsi Album
	}
	if (ai == 0) 
	{
		printf("Na toto pismeno sa nezacina ziadny zo zadanych interpretov.\n\n");
	}
}

void add(char* interpret, char* nazov, int rok) // pridani auta
{
	struct t_alba* noveAlbum; // ukazatel pro nove vkladane Album
	struct t_alba* aktAlbum; // ukazatel na aktualni Album
	noveAlbum = (struct t_alba*)malloc(sizeof(struct t_alba)); // alokace dynamicke promenne
	strcpy_s(noveAlbum->interpret, 30, interpret); // naplneni struktury
	strcpy_s(noveAlbum->nazov, 30, nazov);
	noveAlbum->rok = rok;
	noveAlbum->dalsi = NULL;

	if (prvni == NULL) // linearni seznam je prazdny
	{
		prvni = noveAlbum;
		return;
	}
	else if (poradie(noveAlbum->interpret, prvni->interpret) == 1) // vlozime na zacatek          if a<b
	{
		noveAlbum->dalsi = prvni;
		prvni = noveAlbum;
		return;
	}

	aktAlbum = prvni; // ukazatel na aktualni Album
	while (aktAlbum) // prochazeni seznamu
	{
		if (aktAlbum->dalsi == NULL) // jsme na poslednim aute  
		{
			aktAlbum->dalsi = noveAlbum; // pridavame na konec
			return;
		}
		else if (poradie(noveAlbum->interpret, aktAlbum->dalsi->interpret) == 1)
		{
			noveAlbum->dalsi = aktAlbum->dalsi; // vlozime za aktAlbum
			aktAlbum->dalsi = noveAlbum;
			return;
		}
		aktAlbum = aktAlbum->dalsi; // posun na dalsi Album
	}
}



int main()
{

	add("Scooter", "Wicked!", 1996);
	add("POD", "Satellite", 2001);
	add("Nickelback", "Hesher", 1996);
	add("Disturbed", "Immortalized", 2015);
	add("Saliva", "Saliva", 1997);

	printf("Zotriedenie podla interpreta:\n\n");
	printf("--Interpret---Album-------Rok\n");
	show(NULL);
	printf("\n");


	char znak;
	printf("Zadajte pismeno na ktore sa ma zacinat interpret:\n\n");
	scanf_s("%c", &znak, 1);
	show(znak);

	//getchar();
	return 0;

}
