#include<stdio.h>
    //interative

//Fonction recurcive puissance lineaire
long long PLI(long long a, int n){
    long long resultat = 1;
    int i = 0;
    
    while (i<n){
        resultat *= a;
        i++;
    }

    return resultat;
}
//Fonction récursive puissance itérative rapide 
long long PR(long long b , int m){
    long long result = 1;
    while (m != 0){
        if (m %2 == 0 ){
            b = b * b;
            m = m /2;
        }
        else{
            result = result *b;
            m = m - 1;
        }
    }
    return result;
    
}

int main(){
    int n,m;
    long long a,b;
    char Un_autre_essaie ;
        
    do {
            //Fonction recurcive puissance lineaire
        printf("Fonction puissance lineaire\n");

        printf("Entrez a : ");
        scanf("%lld", &a);

        printf("Entrez n : ");
        scanf("%d", &n);

        long long res = PLI(a, n);
        printf("Resultat : %lld\n", res);

            //Fonction récursive puissance itérative rapide
        printf("Fonction récursive puissance itérative rapide \n");

        printf("Entrez b : ");
        scanf("%lld", &b);

        printf("Entrez m : ");
        scanf("%d", &m);

        long long resl = PR(b, m);
        printf("Resultat : %lld\n", resl);



        printf("Appuyez sur Entree pour continuer ou 'q' pour quitter: ");

        while (getchar() != '\n'); 
        Un_autre_essaie = getchar();

    } while (Un_autre_essaie != 'q' && Un_autre_essaie != 'Q');
    return 0;
}
