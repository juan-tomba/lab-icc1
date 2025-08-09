#include <stdio.h>
#include <stdbool.h>

char labirinto[100][100];
bool visitado[100][100];
int l, c;

bool busca(int i, int j) {
    if (i < 0 || i >= l || j < 0 || j >= c)
        return false;
    if (visitado[i][j] || labirinto[i][j] == '#')
        return false;
    if (labirinto[i][j] == 'P')
        return true;
    visitado[i][j] = true;
    return busca(i+1, j) || busca(i-1, j) || busca(i, j+1) || busca(i, j-1);
}

int main() {
    scanf("%d %d", &l, &c);
    getchar();
    int start_i = -1, start_j = -1;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf(" %c", &labirinto[i][j]);
            if (labirinto[i][j] == 'J') {
                start_i = i;
                start_j = j;
                labirinto[i][j] = '.';
            }
        }
        getchar(); 
    }

    if (busca(start_i, start_j))
        printf("Sim\n");
    else
        printf("Nao\n");

    return 0;
}
