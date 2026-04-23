#include <stdio.h>

    // Fonction récursive puissance

//la fonction récursive puissance_linéaire
unsigned int count = 0;
unsigned int count1 = 0;

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
unsigned int PR(unsigned int a , unsigned int b){
    printf("appel %u ^ %u\n", a, b);

    if (b == 0){
        printf("return 1\n");
        count1++;
        return 1;
    }
    else if(b%2 == 0){
        count1++;
        int temp = PR(a,b/2);
        printf("%u ^ %u = (%u^%u)*(%u^%u)\n", a, b,a, b/2, a, b/2);
        printf("Avec %u^%u = %u \n",a, b/2, temp);
        return temp*temp;
    }
    else if(b%2 == 1){
        count1++;
        int temp = PR(a,(b-1)/2);
        printf("%u ^ %u = %u x (%u^%u)*(%u^%u)\n", a, b, a, a, (b-1)/2,a, (b-1)/2);
        printf("Avec %u^%u = %u \n",a, (b-1)/2, temp);
        return a*temp*temp;
    }
    else{
        //Code Erreur
        return -1;
    }
}

int main(){
        
    unsigned int x, n,a,b;
    char Un_autre_essaie ;
        
    do {
            //la fonction récursive puissance_linéaire
        printf("la fonction récursive puissance_linéaire \n \n");
        count = 0;

        printf("Entrez x: ");
        scanf("%u", &x);

        printf("Entrez n: ");
        scanf("%u", &n);

        unsigned int resultat = PL(x, n);

        printf("Resultat = %u\n", resultat);
        printf("Nombre d'appels = %u\n \n \n", count);


            //la fonction récursive puissance_rapide 
        printf("la fonction récursive puissance_rapide \n \n ");
        count1 =0;
        printf("Entrez a: ");
        scanf("%u", &a);

        printf("Entrez b: ");
        scanf("%u", &b);

        unsigned int Reponse = PR(a, b);

        printf("Resultat = %u\n", Reponse);
        printf("Nombre d'appels = %u\n", count1);

        printf("\nAppuyez sur Entree pour continuer ou 'q' pour quitter: ");
        getchar();
        Un_autre_essaie = getchar();

    } while ( Un_autre_essaie != 'q' && Un_autre_essaie  != 'Q');
       
}



