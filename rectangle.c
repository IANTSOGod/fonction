#include <stdio.h>
#include <math.h>
double f(double a);
int main(){
    double resultat=0.0;
    double i=0.0, debut=3.0, fin=6.0;
    printf("Entrez les intervalles debut et fin sous forme [debut;fin]\n");
	scanf("[%lf;%lf]",&debut,&fin);
    i=debut;
    while(i<fin){
        resultat+=f(i)*(0.001);
        i+=0.001;
        printf("%lf\n", resultat);
    }
    return 0;
}
double f(double a){
    return log(a)-1;
}
