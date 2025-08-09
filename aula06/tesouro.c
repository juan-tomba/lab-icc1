#include <stdio.h>

int main(){
    int valor;
    scanf("%d", &valor);
    printf("Valor inicial do tesouro : %d\n", valor);
    int *p = &valor;
    printf("Valor do tesouro usando mapa : %d\n", *p);
    *p = *p + 10;
    printf("Valor do tesouro usando mapa depois de adicionarmos 10 moedas : %d\n", *p);
    int *(*pp) = &p;
    printf("Valor do tesouro usando mapa para o mapa : %d\n", **pp);
    *(*pp)= *(*pp) + 10;
    printf("Valor do tesouro usando mapa para o mapa depois de adicionarmos 10 moedas : %d\n", **pp);
    return 0;
}