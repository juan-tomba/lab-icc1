#include <stdio.h>

int main(){
    long int tamanho, flag=0, asc=97, cont=0;
    scanf("%ld", &tamanho);
    char palavra[tamanho];
    scanf("%s", palavra);
    for (int j=0; j < 26; j++){
        for (int i=0; i <= tamanho; i++){
            if (palavra[i] == asc){
                cont = cont + 1;
            }
        }
        asc=asc+1;
        if (cont % 2 != 0) flag = -1;
    }
    if (flag<0) printf("Nao");
    else printf("Sim");
    return 0;
}