#include<stdio.h>
    //Factoriel

//Fonction récursive de calcul de factoriel 
long long Facto(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * Facto(n-1);
    }
}

//Fonction itérative de calcul de factoriel 
long long Factor(int m){
    long long res = 1 ;
    int i = 2;

    while( i <= m){
        res *= i;
        i++;
    }

    return res;
}

int main(){
    int n,m;
    char Un_autre_essaie ;

    do {
            //Fonction récursive de calcul de factoriel 
        printf("Fonction récursive de calcul de factoriel \n ");
        printf("Entrez n : ");
        scanf("%d \n", &n);

        long long les = Facto(n);
        printf("Resultat : %lld\n", les);

            //Fonction itérative de calcul de factoriel
        printf("Fonction itérative de calcul de factoriel \n");
        printf("Entrez m : ");
        scanf("%d \n", &m);

        long long es = Factor(m);
        printf("Resultat : %lld\n", es);

        printf("Appuyez sur Entree pour continuer ou 'q' pour quitter: ");

        while (getchar() != '\n'); 
        Un_autre_essaie = getchar();
    }while (Un_autre_essaie != 'q' && Un_autre_essaie != 'Q');
    return 0;

}