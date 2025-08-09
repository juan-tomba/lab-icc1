#include <stdio.h>

void bubble(int *vetor, int n);

int main(){
    int tam, vetor[10000];
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++){
        int num = scanf("%d", &vetor[i]);
    }

    bubble(vetor, tam);

    for (int j = 0; j < tam; j++){
        printf("%d ", vetor[j]);
    }
    return 0;
}

void bubble(int *vetor, int n){

    for (int i = 0; i < (n - 1); i++){
        for (int j = 0; j < (n - 1); j++){
            if (vetor[j] > vetor [j+1]){ 
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}