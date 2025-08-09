#include <stdio.h>

int main(){
    int perguntas, num, soma = 0;
    scanf("%d %d", &perguntas, &num);
    char  gabarito[5000], conta[5000];
    float resultado[5000];
    for (int i = 0; i < perguntas; i++) {
        scanf(" %c", &gabarito[i]);
    }
    for (int i = 0; i < num; i++) {
        int soma = 0;
        for (int j = 0; j < perguntas; j++) {
            scanf(" %c", &conta[j]);
            if (conta[j] == gabarito[j]) {
                soma++;
            }
        }
        resultado[i] = (float)(10 * soma) / perguntas;
    }
    for (int k = 0; k < num; k++){
        float n = resultado[k];
        printf("%.2f\n", n);
    }
    return 0;
}