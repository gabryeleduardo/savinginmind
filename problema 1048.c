#include <stdio.h>
 
int main() {
 
    float salario, novosalario;
    
    scanf("%f", &salario);
    
    if(salario<=400){
    	novosalario = (salario*0.15)+salario;
    	printf("Novo salario: %.2f\n", novosalario);
    	printf("Reajuste ganho: %.2f\n", (salario*0.15));
    	printf("Em percentual: 15 %%\n");
	}if(salario<=800 && salario>400){
		novosalario = (salario*0.12)+salario;
    	printf("Novo salario: %.2f\n", novosalario);
    	printf("Reajuste ganho: %.2f\n", (salario*0.12));
    	printf("Em percentual: 12 %%\n");
	}if(salario<=1200 && salario>800){
		novosalario = (salario*0.10)+salario;
    	printf("Novo salario: %.2f\n", novosalario);
    	printf("Reajuste ganho: %.2f\n", (salario*0.10));
    	printf("Em percentual: 10 %%\n");
	}if(salario<=2000 && salario>1200){
		novosalario = (salario*0.07)+salario;
    	printf("Novo salario: %.2f\n", novosalario);
    	printf("Reajuste ganho: %.2f\n", (salario*0.07));
    	printf("Em percentual: 7 %%\n");
	}if(salario>2000){
		novosalario = (salario*0.04)+salario;
    	printf("Novo salario: %.2f\n", novosalario);
    	printf("Reajuste ganho: %.2f\n", (salario*0.04));
    	printf("Em percentual: 4 %%\n");
	}
 
    return 0;
}
