// ConsoleApplication5.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

int main()
{
    int re1;
    int im1;
    int re2;
    int im2;

    printf("Prvni realna cast: ");
    scanf_s("%d", &re1);
    printf("První imaginarni cast: ");
    scanf_s("%d", &im1);
    printf("druha realna cast: ");
    scanf_s("%d", &re2);
    printf("druha imaginarni cast: ");
    scanf_s("%d", &im2);

    printf("vysledek realne je: %d", (re1 + re2));
    printf("vysledek imginarni je: %d j", (im1 + im2));


}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
