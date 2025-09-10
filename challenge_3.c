#include <stdio.h>
struct Rectangle{
    double longueur;
    double largeur;


};
float myaire(struct Rectangle R1){

return R1.largeur*R1.longueur;
}

int main(){
    struct Rectangle R1;
    printf("saisir la largeur de votre rectangle :\n");
    scanf("%lf",&R1.largeur);
    printf("saisir la longueur de votre rectangle :\n");
    scanf("%lf",&R1.longueur);
    printf("l'aire de votre rectangle est :%.2lf",myaire(R1 ));




return 0;

}