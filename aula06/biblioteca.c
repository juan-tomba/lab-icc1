#include <stdio.h>

int main(){
    int livro1,livro2,livro3, num;
    int troca;
    scanf("%d %d %d", &livro1, &livro2, &livro3);
    int *p1 = &livro1, *p2 = &livro2, *p3 = &livro3;
    scanf("%d", &num);
    troca = 0;
    switch(num){
        case -1:
        p1 = NULL;
        break;

        case 0:
        *p1 = *p1 + 1;
        break;

        case 1:
        break;

        case 2:
        troca = *p1;
        *p1 = *p2;
        *p2 = troca;
        break;

        case 3:
        troca = *p1;
        *p1 = *p3;
        *p3 = troca;
        break;
    }

    scanf("%d", &num); 
    troca = 0; 
    switch(num){
        case -1:
        p2 = NULL;
        break;

        case 0:
        *p2 = *p2 + 1;
        break;

        case 1:
        troca = *p2;
        *p2 = *p1;
        *p1 = troca;
        break;

        case 2:
        break;

        case 3:
        troca = *p2;
        *p2 = *p3;
        *p3 = troca;
        break;
    }

    scanf("%d", &num);
    troca = 0;
    switch(num){
        case -1:
        p3 = NULL;
        break;

        case 0:
        *p3 = *p3 + 1;
        break;

        case 1:
        troca = *p3;
        *p3 = *p1;
        *p1 = troca;
        break;

        case 2:
        troca = *p3;
        *p3 = *p2;
        *p2 = troca;
        break;

        case 3:
        break;
    }

    if (p1 == NULL) printf("cartao1 -> Livro fora da estante\n");
    else printf("cartao1 -> %d\n", *p1);

    if (p2 == NULL) printf("cartao2 -> Livro fora da estante\n");
    else printf("cartao2 -> %d\n", *p2);

    if (p3 == NULL) printf("cartao3 -> Livro fora da estante\n");
    else printf("cartao3 -> %d\n", *p3);

    return 0;
}