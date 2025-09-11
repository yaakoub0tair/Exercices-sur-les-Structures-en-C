#include <stdio.h>

struct Produit
{
    char nom[30];
    double prix;
    int qn;
};
int main(){
    int n,i;
    
    printf("saisir le nombre des produit :\n");
    scanf("%d",&n);
    struct Produit p[n];
    for ( i = 0; i < n; i++)
    {
       printf("--------------- produit : %d_______________\n");
       printf("nom :\n");
       scanf("%s",p[i].nom);
       printf("prix :\n");
       scanf("%lf",&p[i].prix);
       printf("quantite :\n");
       scanf("%d",&p[i].qn);

    }
    printf("\n-_-_-_-_-_-Listes de produits-_-_-_-_-_-_\n");
    for ( i = 0; i < n; i++)
    {
         printf("--------------- produit : %d_______________\n");
        printf("Nom : %s\n",p[i].nom);
        printf("Prix : %.2lf\n",p[i].prix);
        printf("Quantite: %d\n",p[i].qn);
        
    }
    
    












    return 0;
}
