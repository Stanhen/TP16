#include "exo4.h"


void creerUnTableau(float  ** ptab,int const n) {
    *ptab=calloc(n, sizeof(float));
}
void saisirNotes(float tab[], int n) {
    for (int i=0; i<n; ++n) {
        printf("Note %d =",i+1);
        scanf("%f",&tab[i]);
    }
}
 float moyenne(float * tab, int n) {
    float sum=0.0f;
    for(int i=0;i<n; ++i) {
        sum+=tab[i];
    }
    return sum/(float)n;
}



 int main() {
     //pointeur/tableau
     float * notes = NULL;
     int n = 0;

     // Input
     printf("Combien de notes ? ");
     scanf("%d", &n);

    // creation du tableau
    creerUnTableau(&notes, n);

    //remplir tableau
    saisirNotes(notes, n);

    //libération
    free(notes);
    notes=NULL;

    // affichage moyenne
    printf("La moyenne est : %f", moyenne(notes,n));

 }