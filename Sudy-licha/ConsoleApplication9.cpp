

#include <iostream>

int main() {
    int cislo;
    printf("Zadejte rok: ");
    scanf_s("%d", &cislo);

    
    if (cislo % 2 == 0)
        printf("%d je sudy.", cislo);
    else
        printf("%d je lichy.", cislo);

    return 0;
}

