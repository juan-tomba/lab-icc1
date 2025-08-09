// calcula quantos zeros tem no final de n!
#include <stdio.h>

int main(){
    long long int n,zeros,cincos,resto;
    scanf(" %lld", &n);
    cincos=5;
    zeros=0;
    while(cincos<n){
        resto=0;
        resto=n/cincos;
        zeros=zeros+resto;
        cincos=cincos*5;
    }
    printf("%lld", zeros);
    return 0;
}
