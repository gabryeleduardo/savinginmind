#include <stdio.h>
 
int main() {
 
    int hi, mi, hf, mf, inicio, fim, duracao, horas, minutos;
    
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    
    inicio = hi*60+mi;
    fim = hf*60+mf;
    if(inicio == fim){
		duracao = 24*60;
    }else if(fim>=inicio){
    	duracao = fim - inicio;
	}else{
		duracao = (24*60 - inicio)+fim;
	}
	horas = duracao/60;
	minutos = duracao%60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
 
    return 0;
}
