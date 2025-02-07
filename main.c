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
    int* t = calloc(taille,sizeof(int));
    int**=t;
}

int main(void) {
    int * tab=NULL;
    int taille=3;
    allouerTableauEntiersV2(pTab, taille);
    return 0;
}
