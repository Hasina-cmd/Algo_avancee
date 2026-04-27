#include<stdio.h>
    //Nombre de chiffre

//Fonction récursive 
int NBCREC(int n){
    if (n == 0){
        return 0;
    }

    return 1 + NBCREC(n/10);
}

//Fonction itérative  
int NBCI(int m){
    int c=0;
    if (m == 0){
        return 1;
    }
    while (m > 0)
    {
        c++;
        m /= 10;
    }
    
}

//final
int NCBF(int l){
    if (l == 0){
        return 1;
    }
    return NBCREC(l);
}

int main(){
    int n,m,l;
    char Un_autre_essaie ;

    do {
                //final
            printf("Fonction récursive (finale)\n");
            printf("Entrez l : ");
            scanf("%d", &l);

            int ies = NCBF(l);
            printf("Resultat : %d\n", ies);
 
                //Fonction itérative 
            printf("Fonction itérative\n");
            printf("Entrez m : ");
            scanf("%d", &m);

                //Fonction récursive 
            int esl = NBCI(m);
            printf("Resultat : %d\n", esl);

            printf("Appuyez sur Entree pour continuer ou 'q' pour quitter: ");

            while (getchar() != '\n');
            Un_autre_essaie = getchar();

        } while (Un_autre_essaie != 'q' && Un_autre_essaie != 'Q');

    return 0;

}