#include <stdio.h>

// Fonction récursive puissance
unsigned int count = 0;

unsigned int PL(unsigned int x , unsigned int n){
    printf("appel %u ^ %u\n", x, n);

    if (n == 0){
        printf("return 1\n");
        count++;
        return 1;
    }
    else{
        printf("%u ^ %u = %u x %u ^ %u\n", x, n, x, x, (n-1));
        count++;
        return x * PL(x, n - 1);
    }
}

int main(){
    unsigned int x, n;
    char Un_autre_essaie ;

    do {
        count = 0;

        printf("Entrez x: ");
        scanf("%u", &x);

        printf("Entrez n: ");
        scanf("%u", &n);

        unsigned int resultat = PL(x, n);

        printf("Resultat = %u\n", resultat);
        printf("Nombre d'appels = %u\n", count);

        printf("\nAppuyez sur Entree pour continuer ou 'q' pour quitter: ");

        getchar();
        Un_autre_essaie = getchar();

    } while ( Un_autre_essaie != 'q' && Un_autre_essaie  != 'Q');
}
