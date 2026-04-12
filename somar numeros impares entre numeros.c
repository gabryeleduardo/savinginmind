#include <stdio.h>
 
int main() {
 
    int x,y, soma=0, i, min, max;
    
    scanf("%d %d", &x, &y);
    if(x>y){
    	min = y;
    	max = x;
	}else{
		min = x;
		max = y;
	}
	for(i=min+1;i<max;i++){
		if(i%2!=0){
    		soma = i+soma;
		}
	}
	printf("%d\n", soma);
	
    return 0;
}
