#include <stdio.h>
struct Personne {
char nom[50];
char prenom[50];
int age ;

};
int main(){
    struct Personne personne;
    printf("saisir votre nom :\n");
    scanf("%s",personne.nom);
    printf("saisir votre prenom :\n");
     scanf("%s",personne.prenom);
    printf("saisir votre age :\n");
     scanf("%d",&personne.age);


     printf("_______vos_infos_______\n");
     printf("nom : %s\n",personne.nom);
     printf("prenom : %s\n",personne.prenom);
     printf("age : %d\n",personne.age);
     
     





return 0;

}