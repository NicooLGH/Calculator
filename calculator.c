#include <stdio.h>
#include <stdlib.h>

double result;
int nombre1, nombre2;
double chooseNumber() {
    printf("Choisissez le premier nombre\n");
    scanf("%d", &nombre1);
    printf("Choisissez le second nombre nombre\n");
    scanf("%d", &nombre2);
}

int multiplicator(int nb1, int nb2) {
    return nb1 * nb2;
}

int soustractor(int nb1, int nb2) {
    return nb1 - nb2;
}

int operatior(int nb1, int nb2) {
    return nb1 + nb2;
}

int divisor(int nb1, int nb2) {
    return nb1 / nb2;
}

int main()
{
    int choix;
    printf("Choisissez le type de calcul de votre choix : \n");
    printf("1 : opération \n");
    printf("2 : soustraction \n");
    printf("3 : multiplication \n");
    printf("4 : division \n");
    scanf("%d", &choix);
    
    if (choix == 3) {
        chooseNumber();
        result = multiplicator(nombre1, nombre2);
        printf("Le résultat de votre multiplication est %f", result);
    } else if (choix == 2){
        chooseNumber();
        result = soustractor(nombre1, nombre2);
        printf("Le résultat de votre soustraction est %f", result);
    } else if (choix == 1) {
        chooseNumber();
        result = operatior(nombre1, nombre2);
        printf("Le résultat de votre opération est %f", result);
    } else if (choix == 4) {
        chooseNumber();
        result = divisor(nombre1, nombre2);
        printf("Le résultat de votre division est %f", result);
    } else {
        printf("error\n");
        main();
    }

    return 0;
}