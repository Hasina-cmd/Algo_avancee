#include<stdio.h>
    //Conversion binaire

//Fonction récursive
void BR(int n){
    if (n > 1){
        BR(n/2);
        printf("%d",n % 2);
    }
}

//Fonction itérative 
void BI(int m ){
    int bits[32];
    int i = 0;

    if (m == 0){
        printf("0");
        return;
    }
    while (m > 0)
    {
        bits[i++] = m % 2;
        m /= 2;

    }
    for (int j = i -1 ; j >= 0; j--){
        printf("%d", bits[j]);
    }
    
}

int main(){
    int n, m;
    char Un_autre_essaie;

    do {
        // Fonction récursive
        printf("Fonction récursive \n");
        printf("Entrez n: ");
        scanf("%d", &n);

        printf("Resultat binaire : ");
        BR(n);
        printf("\n");

        // Fonction itérative
        printf("Fonction itérative\n");
        printf("Entrez m : ");
        scanf("%d", &m);

        printf("Resultat binaire : ");
        BI(m);
        printf("\n");

        printf("Appuyez sur Entree pour continuer ou 'q' pour quitter: ");

        while (getchar() != '\n');
        Un_autre_essaie = getchar();

    } while (Un_autre_essaie != 'q' && Un_autre_essaie != 'Q');

    return 0;
}