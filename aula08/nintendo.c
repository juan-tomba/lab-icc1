#include <stdio.h>

int main(){
    int vendas[31];
    int maior = 0;
    for (int i=0; i < 31; i++){
        scanf(" %d", &vendas[i]);
    }
    for (int j=0; j < 31; j++){
        if (vendas[j] > maior){
            maior = vendas[j];
        }
    }
    printf("%d\n", maior);
    for (int k=0; k < 31; k++){
        if (vendas[k] == maior) printf("%d\n", (k + 1));
    }
    return 0;
}