#include <stdio.h>
#include <math.h>

double cal_dist(double c1, double c2, double c3, double c4);

int main(){
    int n;
    double c1, c2, soma = 0, x_atual, y_atual;
    scanf("%d", &n);
    scanf("%lf %lf", &x_atual, &y_atual);
    for (int i = 0; i < (n - 1); i++){
        scanf("%lf %lf", &c1, &c2);
        soma = soma + cal_dist(c1, c2, x_atual, y_atual);
        x_atual = c1;
        y_atual = c2;
    }
    printf("%.4lf", soma);
    return 0;
}

double cal_dist(double c1, double c2, double c3, double c4){
    double conta, resultado;
    conta = pow(c1 - c3, 2) + pow(c2 - c4, 2);
    resultado = sqrt(conta);
    return resultado;
}