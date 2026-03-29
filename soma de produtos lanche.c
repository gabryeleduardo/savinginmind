#include <stdio.h>
 
int main() {
 
   int codigo, qtd;
   double produto, soma;
   
   scanf("%d %d", &codigo, &qtd);
   if(codigo == 1){
   	produto = 4.00;	
   }else if(codigo == 2){
   	produto = 4.50;
   }else if(codigo == 3){
   	produto = 5.00;
   }else if(codigo == 4){
   	produto = 2.00;
   }else if(codigo == 5){
   	produto = 1.50;
   }
   printf("Total: R$ %.2lf\n", soma=produto*qtd);

 
    return 0;
}
