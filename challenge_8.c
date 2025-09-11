#include <stdio.h>
#include <math.h>

struct Cercle {
    double rayon;
};
double myaire( struct Cercle c1){


return c1.rayon*c1.rayon*M_PI;

}
int main(){
struct Cercle c1;
c1.rayon=20;
  printf("L'aire du cercle est : %.2lf\n",myaire(c1));






}