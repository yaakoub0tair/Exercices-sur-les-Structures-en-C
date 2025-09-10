#include <stdio.h>
#include <string.h>
struct Livre{
    char titre[50];
    char auteur[50];
    int anne;
};
struct Livre creer_livre(){
    struct Livre l1;
    strcpy(l1.titre, "Le titre ");
    strcpy(l1.auteur, "le auteur");
    l1.anne = 1942;

return l1;
}
int main (){
    struct Livre l1 = creer_livre();
    printf("titre  : %s\n", l1.titre);
    printf("auteur : %s\n", l1.auteur);
    printf("annee  : %d\n", l1.anne);

}
