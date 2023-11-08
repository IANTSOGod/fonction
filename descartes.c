#include <stdio.h>
#include <math.h>

double f(double a);
double bowstring(double a, double i);
double testapprox(double a, double b);
double testall(double a, double b);
int main(){
	double debut=1.0, fin=3.0;
	printf("Entrez les intervalles debut et fin sous forme [debut;fin]\n");
	scanf("[%lf;%lf]",&debut,&fin);
	double d=testapprox(debut, fin), resultat=0.0, e=testall(debut, fin);
	int i=1;
	while(f(resultat)!=0){
		resultat=bowstring(d, e);
		d=resultat;
		i++;
	}
	printf("Apres %d itérations\n%lf\n",i,resultat);
	return 0;
}
double f(double a){
	return log(a)-1;
}
double bowstring(double a, double i){
	double m=(f(i)-f(a))/(i-a);
	double p=f(a)-m*a;
	return -p/m;
}
double testapprox(double a, double b){
	double c=(double)fabs(a-b)/2.0;
	return (f(c)*f(b)<=0)?b:a;
}
double testall(double a, double b){
	double c=(double)fabs(a-b)/2.0;
	return (f(c)*f(b)<=0)?a:b;
}
