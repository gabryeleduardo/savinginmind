#include<stdio.h>
int main(){
	double raio, pi=3.14159;
	scanf("%lf", &raio);
	double volume;
	volume = (4/3.0)*pi*(raio*raio*raio);
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
