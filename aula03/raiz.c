#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c, raizdelta;
    double raiz1, raiz2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta=(pow(b,2))-(4*a*c);
    if (delta<0) printf("NAO EXISTE RAIZ REAL");
    else{
        raizdelta=sqrt(delta);
        raiz1 = (double) (-b+raizdelta)/(2*a);
        raiz2 = (double) (-b-raizdelta)/(2*a);
        if (raiz1>raiz2) 
            printf("%.3lf %.3lf", raiz2, raiz1);
        else if (raiz2>raiz1)printf("%.3lf %.3lf", raiz1, raiz2);
        else printf("%.3lf", raiz1);
    };  
    return 0;
    }