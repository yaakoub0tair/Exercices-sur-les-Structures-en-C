#include <stdio.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[3]; 
};

int main() {
    struct Etudiant etudian[3];
    int i,j;

    for (i = 0; i < 3; i++) {
        printf("Saisir le nom  de %d etudiant:\n",i+1);
        scanf("%s", etudian[i].nom);
        printf("Saisir le prenom de %d etudiant:\n",i+1);
        scanf("%s", etudian[i].prenom);

        for (j = 0; j < 3; j++) {
            printf("Saisir note %d  de %d etudiant :\n",j+1,i+1);
            scanf("%d", &etudian[i].notes[j]);
        }
    }

    for (i = 0; i < 3; i++) {
        printf("_______ Etudiant [%d] _______\n", i + 1);
        printf("Nom    : %s\n", etudian[i].nom);
        printf("Prenom : %s\n", etudian[i].prenom);
        for (j = 0; j < 3; j++) {
            printf("%d note de %d etudiant :%d\n",j+1,i+1, etudian[i].notes[j]);
        }
    }

    return 0;
}
