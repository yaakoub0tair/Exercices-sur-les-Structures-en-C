#include <stdio.h>
 struct Compte 
 {
    char nom [30];
    double solde;

 };
 void ajouter_solde( struct Compte *c){
   double valeurajouter;
   
   printf("donner la valeur initial du solde :\n");
   scanf("%lf ",&c->solde);
   printf("donner la valaeur a ajouter a le solde :\n");
   scanf("%lf",&valeurajouter);
   c->solde=c->solde+valeurajouter;
   printf("Nouveau solde du compte %s est : %.2lf\n",c->nom,c->solde);


 }
 int main() {
    struct Compte c1;
    printf("donner le nom du client :\n");
    scanf("%s", c1.nom);
    ajouter_solde(&c1);
    return 0;
}
 