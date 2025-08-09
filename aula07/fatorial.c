#include <stdio.h>

int main(){
    int n;
    double termo, s, aux;
    s = 1;
    termo = 1;
    scanf("%d", &n);
    for (int i=2; i<=n; i++){
        aux = (double)1 / i;
        termo = termo * aux;
        if ((i%2)==0){
            s = s + termo ;
        }else {
            s = s - termo;
        }
    }
    printf("%lf", s);

    return 0;
}