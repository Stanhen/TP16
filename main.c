#include <stdio.h>
#include <stdlib.h>

int* allouerTableauEntiersV1(int const taille) {
    int *t = calloc(taille,sizeof(int));
    return t;
}

void afficherTab(int tab[], int const taille) {
        if(tab!=NULL) {
            for(int i=0; i<taille; i++) {
                printf("%d", tab[i]);
            }
            printf("\n");
    }
}

void allouerTableauEntiersV2(int** pTab, int const taille) {
    *pTab = (int*)calloc(taille,sizeof(int));
}

int main(void) {
    int * tab=NULL;
    int taille=10;
    allouerTableauEntiersV2(&tab, taille);
    afficherTab(tab,taille);
    free(tab);
    tab=NULL;
    return 0;
}
