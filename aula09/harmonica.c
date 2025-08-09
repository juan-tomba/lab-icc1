#include <stdio.h>

int readInt();
double readDouble();
void printDouble(double val);
double conta(double *vetor, int n);

int main(){
    int n = readInt();
    double vetor[10000];
    for (int i = 0; i < n; i++){
        vetor[i] = readDouble();
    }
    double media = (n / conta(vetor, n)) - 1;
    printDouble(media);
    return 0;
}

int readInt(){
    int n;
    scanf("%d", &n);
    return n;
}

double readDouble(){
    double n;
    scanf("%lf", &n);
    return n;
}

void printDouble(double val){
    printf("%.2lf", val);
}

double conta(double *vetor, int n){
    double soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + 1 / (vetor[i] + 1);
    }
    return soma;
}