#include <stdio.h>
 
int main() {
	
	float a,b,c,d;
 
    scanf("%f %f %f", &a, &b, &c);
    
    if (a < b) {
        d = a;
        a = b;
        b = d;
    }

    if (a < c) {
        d = a;
        a = c;
        c = d;
    }

    if (b < c) {
        d = b;
        b = c;
        c = d;
    }
    
	if(a>=b+c){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if(a*a == b*b+c*c){
			printf("TRIANGULO RETANGULO\n");
		}if(a*a > b*b + c*c){
			printf("TRIANGULO OBTUSANGULO\n");
		}if(a*a < b*b + c*c){
			printf("TRIANGULO ACUTANGULO\n");
		}if(a == b && b == c){
			printf("TRIANGULO EQUILATERO\n");
		}else if(a == b || b == c || c == a){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	
    return 0;
}
