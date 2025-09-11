#include <stdio.h>
struct Date
{
    /* data */
    int jour;
    int annee;
    int mois;
};
int main(){
    struct Date date;
    date.annee=2002;
    date.jour=28;
    date.mois=5;
    struct Date *d=&date;
    printf("-_-_-Date : %d / %d / %d -_-_-_-_-\n",date.annee,date.mois,date.jour);
    printf("saisir votre annee : \n");
    scanf("%d",&d->annee);
    printf("saisir votre jours : \n");
    scanf("%d",&d->jour);
    printf("saisir votre mois : \n");
    scanf("%d",&d->mois);

    printf("-_-_-Date : %d / %d / %d -_-_-_-_-\n",date.annee,date.mois,date.jour);












    return 0;
}
