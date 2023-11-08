#include <stdio.h>
#include <math.h>
double f(double a);
int main(){
	double resultat=0.0, rect=0.0, debut=2.0, fin=4.0, i=debut;
	printf("Entrez les intervalles debut et fin sous forme [debut;fin]\n");
	scanf("[%lf;%lf]",&debut,&fin);
	while(i<=fin-0.00001){
		resultat+=((f(i)+f(i+0.00001))/(double)2)*(0.00001);
		i+=0.00001;
	}
	i=resultat;
	
	while(i<=fin){
		rect+=f(i)*(0.00001);
		i+=0.00001;
	}
	printf("%lf\n", resultat-rect);
	return 0;
}
double f(double a){
	return log(a)-1;
}
