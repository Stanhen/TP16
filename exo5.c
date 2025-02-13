#include <stdlib.h>
#include <stdio.h>

void afficherMatrice(int** matrice, int nbLig, int nbCol) {
    for (int i = 0; i < nbLig; i++) {
        for (int j = 0; j < nbCol; j++) {
            printf("%d\t", matrice[i][j]);
        }
        printf("\n");
    }
}

void remplirMatrice(int** matrice, int nbLig, int nbCol) {
    for (int i = 0; i < nbLig; i++) {
        for (int j = 0; j < nbCol; j++) {
            printf("Quelle valeur en [%d][%d] ?\n", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void creerMatrice(/* pointeur matrice */, int* nbLig, int* nbCol) {
    printf("Combien de lignes ?\n");
    scanf("%d", nbLig);
    printf("Combien de colonnes ?\n");
    scanf("%d", nbCol);
    // Créer la matrice ici
}

void libererMatrice(/* pointeur matrice */, int* nbLig, int* nbCol) {
    for (int i = 0; i < *nbLig; i++) {
        for (int j = 0; j < *nbCol; j++) {
            matrice[i][j] = 0;
        }
        // Libération tableau horizontal
    }
    // Libération tableau vertical
    // remise à NULL du pointeur
}

int main() {
    int** matrice = NULL;
    int nbLignes, nbColonnes;
    creerMatrice(&matrice, &nbLignes, &nbColonnes);
    remplirMatrice(matrice, nbLignes, nbColonnes);
    afficherMatrice(matrice, nbLignes, nbColonnes);
    libererMatrice(&matrice, &nbLignes, &nbColonnes);
    return 0;
