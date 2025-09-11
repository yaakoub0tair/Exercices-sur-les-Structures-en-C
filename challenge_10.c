#include <stdio.h>
#include <stdlib.h>
 struct Employe 
{
    char nom[30];
    double salaire ;


};
int main ()
{
    int n;
    
     printf("entrer le nombres des employes :\n");
     scanf("%d",&n);
     struct Employe *e1= malloc(n * sizeof(struct Employe));
     for (int i = 0; i < n; i++)
     {
         printf("saisir le nom de %d employe \n",i+1);
         scanf("%s",e1[i].nom);
           printf("saisir le salaire de %d employe :\n",i+1);
         scanf("%lf",&e1[i].salaire);
         
     }
     for ( int i = 0; i < n; i++)
     {
       printf("------%d------\n",i+1);
       printf("nom :%s\n",e1[i].nom);
       printf("salaire :%.2lf\n",e1[i].salaire);
     }
     
     

free(e1);
e1=NULL;

    





   
}

