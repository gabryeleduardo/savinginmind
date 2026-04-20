#include <stdio.h>
 
int main() {
 
    int x, y, z;
    scanf("%d %d", &x, &y);
    if(y>x){
    	z=y;
		y=x;
    	x=z;	
	}else{}
	if(x%y==0){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
 
    return 0;
}
