// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
    int iSecret;

    /* initialize random seed: */
    srand(time(NULL));

    /* generate secret number between 1 and 10: */
    iSecret = rand() % 10 + 1;

    printf(iSecret);
}
