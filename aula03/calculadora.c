// calculadora do jeito: a operador b
#include <stdio.h>

int main(){
    double a,b,resul;
    char op;
    scanf("%lf %c %lf", &a,&op,&b);
    switch (op){
        case '+':
        resul=a+b;
        break;
        case '-':
        resul=a-b;
        break;
        case '/':
        resul=a/b;
        break;
        case '*':
        resul=a*b;
        break;
    }
    printf("%.2lf",resul);
    return 0;
}
