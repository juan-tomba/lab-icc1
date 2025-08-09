#include <stdio.h>
#include <string.h>

int buscaBinariaRec(char jogos[][51], int esquerda, int direita, char alvo[]) {
    if (esquerda > direita)
        return -1;
        
    int meio = (esquerda + direita) / 2;
    int comp = strcmp(jogos[meio], alvo);
    if (comp == 0)
        return meio;
    else if (comp > 0)
        return buscaBinariaRec(jogos, esquerda, meio - 1, alvo);
    else
        return buscaBinariaRec(jogos, meio + 1, direita, alvo);
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 
    char jogos[n][51];
    for (int i = 0; i < n; i++) {
        fgets(jogos[i], 51, stdin);
        jogos[i][strcspn(jogos[i], "\n")] = '\0';  
    }
    char alvo[51];
    fgets(alvo, 51, stdin);
    alvo[strcspn(alvo, "\n")] = '\0'; 
    int posicao = buscaBinariaRec(jogos, 0, n - 1, alvo);

    if (posicao != -1)
        printf("Jogo encontrado na posição %d\n", posicao);
    else
        printf("Jogo nao encontrado\n");

    return 0;
}
