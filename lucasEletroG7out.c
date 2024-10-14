#include <stdio.h>
#include <math.h>

int main() {
    int producao_total;
    int defeituosos;
    float soma;

    printf("Informe o numero total de itens produzidos: ");
    scanf("%d", &producao_total);

    printf("Informe o numero de itens defeituosos: ");
    scanf("%d", &defeituosos);

    soma =producao_total* 0.1;

    if (soma>defeituosos) { 
    printf ("funcionando");
}

     else { 
     printf ("nao funcionando");   
 } 
    
}